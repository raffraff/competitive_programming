#include <stdio.h>
#include <algorithm>
 
long long c[100001];
int main(){
    int n,x;
    scanf("%d %d",&n,&x);
 
    for(int i = 0; i < n; i++)
        scanf("%d",c + i);
 
    std::sort(c, c + n);
 
    long long ans = 0;
    for(int i = 0; i < n; i++){
        ans += (x * c[i]);
        if(x > 1) x--;
    }
    printf("%I64d\n",ans);
    return 0;
}