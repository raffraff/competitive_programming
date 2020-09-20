#include <stdio.h>
 
int main(){
    int n;
    scanf("%d",&n);
 
    int a[n],m,i;
    for(i = 0; i < n; i++)
        scanf("%d",a + i);
    scanf("%d",&m);
    while(m--){
        int x,y;
        scanf("%d %d",&x, &y);
        a[x - 2] += y - 1;
        a[x] += a[x - 1] - y;
        a[x - 1] = 0;
    }
    for(i = 0; i < n; i++)
        printf("%d\n",a[i]);
    return 0;
}