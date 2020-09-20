#include <stdio.h>
#include <algorithm>
#include <string.h>
char s[100001];
 
int main(){
    int a[5];
 
    for(int i = 0; i < 4; i++)
        scanf("%d",a + i);
 
    scanf("%s",&s);
 
    long long ans = 0;
    for(int i =0 ; i < strlen(s); i++)
        ans += a[(s[i] - '0') - 1];
 
    printf("%d",ans);
    return 0;
}