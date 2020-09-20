#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;

typedef long long ll;

ll n;

void solve(){
    cin >> n;
    double tt = sqrt(8 * n + 1) - 1;
    if(floor(tt) == tt) cout << "Go On Bob " << (ll)tt / 2 << endl;
    else cout << "Better Luck Next Time\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}