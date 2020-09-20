#include <stdio.h>
#include <string.h>
 
int toInt(char c){ return c - '0'; }
 
int main(){
        char a[100];
        int k;
        scanf("%s %d",&a,&k);
        int n = strlen(a);
        for(int i = 0; i < n; i++){
            int w = i;
            for(int j = i; j < n; j++){
                if(j - i > k) break;
                if(a[j] > a[w]) w = j;
            }
 
            for(int j = w; j > i; j--){
                char c = a[j];
                a[j] = a[j-1];
                a[j-1] = c;
                k--;
            }
        }
        printf("%s\n",a);
    return 0;
}