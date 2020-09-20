#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector> 
#include <list>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>
#include <cstdlib>
#include <cmath>
#include <cstdio>
#include <fstream>
#include <ctime>
#include <cassert>

using namespace std;
long long ans;
int sz;
vector<int> v;

const int T=100100;
int f[T];
vector<int> g[1001000];

void dfs(int v) {
    sz++;
    f[v] = 1;
    for (int i = 0;i < g[v].size(); i++)
        if (!f[g[v][i]]) 
            dfs(g[v][i]);
}


int main() {
    int N, I, a, b;
    cin >> N >> I;
    while (I--) {
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for (int i = 0; i < N; i++)
        if (!f[i]) {
            sz = 0;
            dfs(i);
            v.push_back(sz);
        }

    for (int i = 0; i < v.size(); i++)
        ans += (long long)v[i] * (N - v[i]);

    cout<< (ans>>1) <<endl;
}