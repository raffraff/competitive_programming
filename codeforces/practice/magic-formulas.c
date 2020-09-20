#include <stdio.h>
 
long long q[1000001];
 
int main(){
    int n,Q = 0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        int p;
        scanf("%d",&p);
        Q ^= p;
    }
    q[0] = 0;
    for(int i = 1; i <= n; i++) q[i] = q[i-1] ^ i;
    for(int i = 1; i <= n; i++){
        int tt = n / i;
        if(tt % 2 != 0) Q ^= q[i - 1];
        Q ^= q[n%i];
    }
  
    printf("%d",Q);
    return 0;
}