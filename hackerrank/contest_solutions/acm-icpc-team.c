#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char str[3001][1001];
int topic,team;

bool check(char a[], char b[],int len){
    int tmp = 0,i;
    for(int i = 0; i < len; i++)
        if( (a[i] - '0') | (b[i] - '0') )
            tmp++;
    if(tmp > topic) team = 0;
    if( tmp >= topic ) {
        team++;
        topic = tmp;
        return true;
    }else {
        return false;
    }
}

int main(){
    int n,m,i,j;
    team = topic = 0;
    scanf("%d %d",&n,&m);
    memset(str, '\0', sizeof(str));
    for(i = 0; i < n; i++) scanf("%s", &str[i]);
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            check(str[i],str[j],m);
        }
    }
    printf("%d\n%d\n",topic,team);
    return 0;
}