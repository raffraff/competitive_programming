#include <stdio.h>
 
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int a,i,ans = 0;
    for(i = 0; i < n; i++){
        scanf("%d",&a);
        if(a + k <= 5) ++ans;
    }
 
    printf("%d",ans/3);
 
    return 0;
}