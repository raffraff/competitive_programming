#include <stdio.h>
#include <algorithm>
 
int main(){
    int n,x = 0;
    scanf("%d",&n);
    char c[n];
    scanf("%s",c);
 
    for(int i = 0; i < n; i++)
        if(c[i] == 'x') x++;
 
    x -= (n / 2);
    printf("%d\n", abs(x));
 
    for(int i = 0; i < n; i++){
        if(x > 0 && c[i] == 'x')
            c[i] = 'X', --x;
 
        if(x < 0 && c[i] == 'X')
            c[i] = 'x', ++x;
 
        if(x == 0) break;
 
    }
    printf("%s",c);
    return 0;
}