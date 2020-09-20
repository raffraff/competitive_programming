#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<long> b, g;

int main() {
    int n;
    long k, ans = 0;
    scanf("%d%ld", &n,&k);
    for(int i = 0; i < n * 2; i++) {
        long tmp;
        scanf("%ld", &tmp);
        if(i < n) b.push_back(tmp);
        else g.push_back(tmp);
    }
    sort(b.begin(),b.end());
    sort(g.begin(),g.end());
    int idx = 0, i = 0, j = 0;
    while( i < n && j < n){
        if(abs(b[i] - g[j]) <= k){
            ++ans;
            ++i;
            ++j;
        }else if(b[i] < g[j]){
            ++i;
        }else{
            ++j;
        }
    }
    printf("%ld\n", ans);
    return 0;
}