#include <stdio.h>
#include <algorithm>
#include <math.h>
 
struct Hash{
    int k;
    int x;
    int y;
    int d;
};
 
int cmp(const void *a, const void *b)
{
    const Hash *p1 = (Hash *)a;
    const Hash *p2 = (Hash *)b;
    if (p1->d < p2->d) return -1;
    else if (p1->d > p2->d) return 1;
    else return 0;
}
int main(){
    int n,s,i;
    scanf("%d %d",&n,&s);
    Hash r[n];
    for(i = 0; i < n; i++){
        scanf("%d %d %d",&r[i].x,&r[i].y,&r[i].k);
        r[i].d = abs(r[i].x*r[i].x) + abs(r[i].y*r[i].y);
    }
    qsort(r,n,sizeof(*r),cmp);
    i = 0;
    while(n--){
        s += r[i].k;
        if(s >= 1e6) break;
        i++;
    }
    if(s < 1e6) printf("-1");
    else printf("%.7f", sqrt(r[i].d));
    return 0;
}