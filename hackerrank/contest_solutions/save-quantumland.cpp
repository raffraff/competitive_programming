#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        scanf("%d", &n);
        int c;
        long ans = 0, x = 0;
        for(int i = 0; i < n; i++) {
            scanf("%d", &c);
            if(c < 1) {
                ++x;
            }else {
                ans += x / 2;
                x = 0;
            }
        }
        if(x) ans += x / 2;
        printf("%ld\n", ans);
    }
    return 0;
}
