#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int gcd(int a,int b){
    return (a % b == 0) ? b : gcd(b, a % b);
}

int main(){
    int t, n, i;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        long ans = 1;
        for(i = 2; i <= n; i++)
            ans *= i/gcd(ans,i);
        printf("%ld\n",ans);
    }
    return 0;
}
