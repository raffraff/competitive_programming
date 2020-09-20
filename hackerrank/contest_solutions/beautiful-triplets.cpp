#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int nn[12345];

int main() {
    int n, d, x, ans = 0;
    scanf("%d %d", &n, &d);
    map<int, bool> m;
    for (int i = 0; i < n; i++) {
        scanf("%d", nn + i);
        m[nn[i]] = true;
    }
    
    for (int i = 0; i < n; i++) 
        if (m[nn[i] + d] && m[nn[i] + d + d]) 
            ++ans;
    
    
    printf("%d\n", ans);
    return 0;
}