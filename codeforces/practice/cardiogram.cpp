#include <stdio.h>
#include <string.h>
#include <algorithm>
 
char grid[2000][2000];
 
int main(){
    int n;
    scanf("%d",&n);
    int sum = 0, a[n];
    int x = 1000, y = 1000;
    int minY = y, maxY = 0;
 
    for(int i = 0; i < n; i++){
        scanf("%d", a + i);
        sum += a[i];
 
        while(a[i]){
            grid[y][x++] = (i % 2 == 0) ? '/' : '\\';
            minY = std::min(minY,y);
            maxY = std::max(maxY,y);
            if(--a[i] == 0) break;
            if(i % 2 == 0) y--;
            else y++;
        }
    }
 
    for(int i = minY; i <= maxY ; i++){
        for(int j = 1000; j < 1000 + sum; j++){
            if(grid[i][j] == '/' || grid[i][j] == '\\')
                printf("%c",grid[i][j]);
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}