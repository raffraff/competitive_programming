#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a;
    register int ans = 0;
    cin >> n;
    while(n--){
        cin >> a;
        ans ^= a;
    }
    cout << ans;
    return 0;
}
