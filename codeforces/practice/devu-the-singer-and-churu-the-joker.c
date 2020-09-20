#include <stdio.h>
 
int main(){
    int n,d;
    scanf("%d %d",&n,&d);
    int t[n],i;
    int jokes = 0;
    long long time = 0;
    for(i = 0 ; i < n ; i++){
        scanf("%d",t + i);
        time += t[i];
    }
    time += (10 * (n - 1));
    if(time <= d) printf("%d\n", (2 * (n - 1)) + ((d - time) / 5) );
    else printf("-1\n");
 
    return 0;
}