#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}
int main() {
    int t; 
    long long x1, y1, x2, y2, x3, y3;
    scanf("%d", &t);
    while(t--) {
        scanf("%lld%lld%lld%lld%lld%lld",&x1, &y1, &x2, &y2, &x3, &y3);
        long long area = abs((x1 * y2) + (x2 * y3) + (x3 * y1) - (x1 * y3) - (x3 * y2) - (x2 * y1)) / 2;
        long long bounds = gcd(abs(x2 - x1), abs(y2 - y1)) + gcd(abs(x3 - x2), abs(y3 - y2)) + gcd(abs(x3 - x1), abs(y3 - y1));
        printf("%lld\n", area - (bounds/2) + 1);
    }
    return 0;
}