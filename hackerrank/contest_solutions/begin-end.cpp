#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    long long letters[26] = {0}, ans = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        int tmp = s[i] - 'a';
        ++letters[tmp];
        ans += letters[tmp];
    }
    printf("%lld\n",ans);
    return 0;
}