#include <stdio.h>
#include <stdlib.h>
#include <math.h>

bool *isPrime = 0;
int GetPrime ( int **primeSet, int upperLimit ){

    for ( int i = 0; i <= (upperLimit >> 1); i++ )
        isPrime[i] = true;

    int end = (int)sqrtf ( upperLimit );
    for ( int i = 3; i <= end; i += 2 ) {
        if ( isPrime[i >> 1] ){
            for ( int composite = 3; i*composite <= upperLimit; composite += 2 )
                isPrime[(i*composite) >> 1] = false;
        }
    }

	*primeSet = (int*)malloc ( sizeof ( int )*(upperLimit + 1) );
	int *_primeSet = *primeSet;


    int i, j;
    for ( i = 1, j = 1; j < (upperLimit >> 1); j++ ){
        if ( isPrime[j] ){
            _primeSet[i] = (j << 1) + 1;
            i++;
        }
    }
    _primeSet[0] = 2;
    return i;
}
int main (){
    int *prime, bounder = 104730, t, n;
    isPrime = (bool*)malloc ( (bounder + 1) >> 1 );
    int numberPrimes = GetPrime ( &prime, bounder );

    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        printf ("%d\n", prime[n - 1] );
    }
	free ( isPrime );
    free ( prime );
    return 0;
}

