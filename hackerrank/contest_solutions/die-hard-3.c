#include<stdio.h>
#include<stdbool.h>
int gcd(int a,int b){
    return (a % b == 0) ? b : gcd(b, a % b);
}

bool solve(int a,int b,int c){
    if(c == 0) return 1;
    if(a == c || b == c) return 1;
    if(a == 0 || b == 0) return 0;
    if(c % gcd(a,b) != 0) return 0;
    if(c > a && c > b) return 0;
    return 1;
}
int main(){
    int a,b,c,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&a,&b,&c);
        printf("%s\n", (solve(a,b,c)) ? "YES" : "NO" );
    }
	return 0;
}