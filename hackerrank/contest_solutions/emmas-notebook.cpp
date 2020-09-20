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

long solve(int t) {
    if(t == 1) return t;
    vector<int> v;
    for(int i = 2; i < (t/2) + 2; i++) 
        v.push_back(i);
        
    long ans = 1;
    for(int i = 0; i < t - 1; i++) 
        ans += v[i / 2];
	return ans;
}
int main(){
    int t;
    cin >> t;
    printf("%ld\n", solve(t));
    return 0;
}