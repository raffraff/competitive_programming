#include <stdio.h>
 
int main(){
        int n,m;
        scanf("%d %d",&n,&m);
        int a[n];
        for(int i = 0; i < n; i++)
            scanf("%d", a + i);
 
        int ans = 0;
        for(int i = 0; i < n; ){
            int sum = 0;
            while(i < n && sum + a[i] <= m){
                sum += a[i];
                i++;
            }
            ans++;
        }
        printf("%d\n",ans);
    return 0;
}