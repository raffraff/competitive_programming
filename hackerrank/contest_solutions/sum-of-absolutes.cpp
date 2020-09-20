#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long a[123456] = {0};

int main() {
    int n, q, l, r, x;
    scanf("%d %d",&n,&q);
    scanf("%lld", a);
    if(a[0] < 0) a[0] = -a[0];
    for(int i = 1; i < n; i++) {
        scanf("%d", &x);
        if(x > 0) a[i] = a[i - 1] + x;
        else a[i] = a[i - 1] - x;
    }
    while(q--){
        scanf("%d %d",&l, &r);
        if(l - 2 < 0) x = a[r - 1];
        else x = a[r - 1] - a[l - 2];
        puts((x % 2) == 0 ? "Even" : "Odd");
    }
    return 0;
}