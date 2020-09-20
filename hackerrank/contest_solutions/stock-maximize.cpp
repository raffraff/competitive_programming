#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int max = a[n - 1];
        long ans = 0;
        for(int i = n - 2; i >= 0; --i){
            if(a[i] < max) ans += max - a[i];
            else max = a[i];
        }
        cout << ans << endl;
    }
    return 0;
}