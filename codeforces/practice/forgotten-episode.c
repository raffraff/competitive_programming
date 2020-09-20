#include <stdio.h>
 
int main(){
    int n,s;
    scanf("%d",&n);
    long long ans = 0;
    for(int i = 1; i <= n; i++) ans ^= i;
    for(int i = 0; i < n-1; i++){
        scanf("%d",&s);
        ans ^= s;
    }
    printf("%I64d",ans);
    return 0;
}