#include <stdio.h>
 
int main(){
    int n,ans[2] = {0},s;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%d",&s);
        ans[s == 200]++;
    }
 
    if(n < 2 || (ans[0] == 0 && ans[1] % 2 != 0) || (ans[1] == 0 && ans[0] % 2 != 0) || ((ans[0] + (ans[1] * 2)) % 2 != 0))
        puts("NO");
    else puts("YES");
    return 0;
}