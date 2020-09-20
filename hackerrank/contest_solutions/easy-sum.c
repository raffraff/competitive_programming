#include <stdio.h>

int main(){
    int t;
    long long int n,m,ui64,yy;
    scanf("%d",&t);
    while(t--){
        scanf("%lld %lld",&n,&m);

        if(n >= m){
            ui64 = ((m-1) * m) / 2;
            yy = (n%m);
            yy = ( yy * (yy + 1)) / 2;
            ui64 = ((ui64 * (n / m)) + yy);
        }else{
            ui64 = (n * (n+1))/ 2;
        }
        printf("%lld\n",ui64);
    }
    return 0;
}