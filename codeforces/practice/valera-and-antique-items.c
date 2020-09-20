#include <stdio.h>
#include <stdbool.h>
 
int main(){
    int n,k, c = 0,v,s;
    bool ans[50] = {false};
    scanf("%d %d",&n,&v);
    for(int i = 0; i < n; i++){
        scanf("%d",&k);
        for(int j = 0; j < k; j++){
            scanf("%d", &s);
            if(s < v) ans[i] = true;
 
        }
        if(ans[i] == true) c++;
    }
    if(c == 0) printf("0");
    else{
        int i = 0;
        printf("%d\n",c);
        while(c){
            if(ans[i++]){
                c--;
                printf("%d ",i);
            }
        }
    }
    return 0;
}