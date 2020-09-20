#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t, a, b;
    scanf("%d", &t);
    while(t--) {
        scanf("%d%d", &a, &b);
        int c = a + b;
        puts( ((a + b) % 2 == 0) && (a != 0 && b != 0) ? "Second" : "First");
        
    }
    return 0;
}