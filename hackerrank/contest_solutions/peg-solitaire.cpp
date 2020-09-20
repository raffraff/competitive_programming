#include <iostream>
#include <cmath>

using namespace std;

int const N = 10;
char b[N][N];
int dx[] = {0, 1,0,-1}, dy[] = {-1,0,1, 0};
int pegs = 0, P = 0, initialPeg;

struct S{
    int x;
    int y;
    int d;
};
S tracker[50];

void push(int x, int y, int d){
    tracker[P].x = x;
    tracker[P].y = y;
    tracker[P].d = d;
    ++P;
}

void print_valid_moves(int n,int m){
    char direction[4][6] = {"UP","RIGHT","DOWN","LEFT"};
    cout << P << endl;
    for(int i = 0 ; i < P; i++)
        cout << tracker[i].x - 1 << " " << tracker[i].y - 1 << " " << direction[tracker[i].d] << endl;
}

bool dfs(int pegs, int n, int m){
    if(pegs==1) {
        if (b[(int)floor(n/2)][(int)floor(m/2)] == '.') return true;
        else return false;
    }
    for(int x = 0; x < n; x++)
        for(int y = 0; y < m; y++)
            if(b[x][y] == '.' )
                for(int d = 0; d <= 3; ++d){
                    int xn = x + dx[d];
                    int yn = y + dy[d];
                    if(xn < 0 || yn < 0 || xn >= n || yn >= m) continue;
                    if(b[xn][yn] == '.' ){
                        int xnn = xn + dx[d];
                        int ynn = yn + dy[d];
                        if(xnn < 0 || ynn < 0 || xnn >= n || ynn >= m) continue;
                        if(b[xnn][ynn] == '-'){
                            b[x][y] = '-';
                            b[xn][yn] = '-';
                            b[xnn][ynn] = '.';
                            pegs--;
                            push(x, y, d);
                            if( dfs(pegs, n, m) ) return true;
                            b[x][y] = '.';
                            b[xn][yn] = '.';
                            b[xnn][ynn] = '-';
                            pegs++;
                            --P;
                        }
                    }
                }
    if(initialPeg == 32) return false;
    else return true;
}

int main(){
    int n, m;
    cin >> m >> n;
    n += 2;
    m += 2;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            if(j == 0 || i == 0 || j == m - 1 || i == n - 1) b[i][j] = 'x';
            else{
                char c;
                cin>>c;
                b[i][j] = c;
                if(c == '.') pegs++;
            }
        }
    }
    initialPeg = pegs;
    if(dfs(pegs,n,m)) print_valid_moves(n,m);
    else cout << P;
    return 0;
}