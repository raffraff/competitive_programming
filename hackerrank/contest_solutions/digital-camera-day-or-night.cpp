#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int r, g, b, avg = 0, n = 0;
    char s[255];
    while (scanf("%s", s) != EOF) {
        sscanf(s, "%d,%d,%d", &r, &g, &b);
        avg += (r + g + b) / 3;
        ++n;
    }
    avg /= n;
    if (avg < 80) cout << "night\n";
    else cout << "day\n";
    return 0;
}