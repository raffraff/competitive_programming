#include <stdio.h>
#define MAX(a,b) ((a) > (b)) ? (a) : (b)

int main(){
    int t, n, k, i, j;
    char s[1001];
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %s",&n, &k, &s);
        long long m = 0;
        for(i = 0; i <= n - k; i++){
            int prod = s[i] - '0';
            for(j = 1; j < k; j++)
                prod *= (s[j + i] - '0');
            m = MAX(m,prod);
        }
        printf("%lld\n",m);
    }
    return 0;
}