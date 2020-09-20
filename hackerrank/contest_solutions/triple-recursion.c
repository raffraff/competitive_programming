#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void tripleRecursion(int n, int m, int k) {
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            int x;
            if (i + j == 0) x = m;
            else if (i == j) x = m + (i * k);
            else if (i < j) x = m + (i * k) - (j - i);
            else x = m + (j * k) - (i - j);
            printf("%d ", x);
        }
            puts("");
    }
}

int main() {
    int n; 
    int m; 
    int k; 
    scanf("%i %i %i", &n, &m, &k);
    tripleRecursion(n, m, k);
    return 0;
}