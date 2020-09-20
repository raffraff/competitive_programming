#include <stdio.h>
#include <stdbool.h>
#include <string.h>
 
char in[1000];
int main(){
    bool table[26] = {false};
    gets(in);
    int ans = 0, i;
    
    for(i = 0; i < strlen(in); i++){
        if(in[i] >= 'a' && in[i] <= 'z' && !table[in[i] - 97]){
            table[in[i] - 97] = true;
            ans++;
        }
    }
    printf("%d\n",ans);
    return 0;
}