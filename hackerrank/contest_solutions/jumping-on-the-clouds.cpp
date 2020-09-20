#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, ans = 0; 
    scanf("%d",&n);
    int c[n];
    
    for (int i = 0; i < n; i++) scanf("%d", c + i);
    for (int i = n - 1; i > 0;) {
        if (c[i - 2]) --i;
        else i-=2;
        ++ans;
    }
    printf("%d\n", ans);
    
    return 0;
}