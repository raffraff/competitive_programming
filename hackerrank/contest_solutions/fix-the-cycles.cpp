#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, b, c, d, e, f;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    int x = a + b + f, 
        y = a + e + d,
        z = a + b + c + d;
    printf("%d\n", x >= 0 && y >= 0 && z >= 0 ? 0 : abs(min(x, min(y, min(0, z))) ) ) ;
    return 0;
}