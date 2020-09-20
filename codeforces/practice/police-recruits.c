#include <stdio.h>
#define MIN(a,b) ( (a) < (b) ) ? (a) : (b)
 
int main(){
    int n, w = 0, ans = 0, i;
    scanf("%d",&n);
    for(i = 0 ; i < n ; i++){
        int a;
        scanf("%d",&a);
        w += a;
        ans = MIN(ans,w);
    }
    printf("%d",ans*-1);
    return 0;
}