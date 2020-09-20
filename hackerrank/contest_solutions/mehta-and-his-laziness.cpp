#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long n;
vector<pair<long long, long long> > factors;
void getFactors(long long z) {
    factors.clear();
    long long d = 1;
    for (long long i = 2; i * i <= z; i += d, d = 2)
        if (z % i == 0) {
            factors.push_back(make_pair(i, 0));
            while (z % i == 0) {
                z /= i;
                factors.back().second++;
                }
            }
    if (z != 1) factors.push_back(make_pair(z, 1));
}

long long p,q;
void getDivisors(long long ind = 0, long long res = 1) {
    if (ind == (long long) factors.size()) {
        ++q;
        int x = sqrt(res);
        if( x % 2 == 0 && x * x == res && res != n) ++p; 
        return;
    }
    for (int i = 0; i <= factors[ind].second; i++) {
        getDivisors(ind + 1, res);
        res *= factors[ind].first;
    }
}

int gcd(int a, int b){
    return (a % b == 0) ? b : gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        p = q = 0;
        getFactors(n);
        getDivisors();
        --q;
        int reduce = gcd(p,q);
        if(p == 0) puts("0");
        else cout << p / reduce<< "/" << q / reduce << endl;
    }
    return 0;
}
