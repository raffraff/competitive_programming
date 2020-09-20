#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const long long MOD = 1000000007;

long long pow2(long long base, int exp) {
    long long result = 1;
    while (exp){
        if (exp & 1) result = (result * base) % MOD;
        exp >>= 1;
        base = (base * base) % MOD;
    }
    return result % MOD;
}

int main() {
    int t;
    long long n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << (2 * (pow2(2,n) - 1) + 4) % MOD << endl;
    }
    return 0;
}