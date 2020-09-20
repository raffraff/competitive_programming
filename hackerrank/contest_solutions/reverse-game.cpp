#include <iostream>
#include <vector>

using namespace std;

vector<int> h;

int main(){
    for(int i = 0; i < 100000; i++) h.push_back(i);
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 0; i <= n/2 ; i++){
            if(h[n - 1 - i] == k){
                cout << i * 2 << endl;
                break;
            }
            if(h[i] == k){
                cout << i * 2 + 1 << endl;
                break;
            }
        }
    }
    return 0;
}