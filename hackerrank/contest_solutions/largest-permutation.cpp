#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

ll qq[100100], ind[100100];

int main() {
    int N;
    ll K;
    cin >> N >> K;
    for(int i = 0; i < N; i++) {
        cin >> qq[i];
        ind[qq[i] - 1] = i;
    }
    for(int i = 0; i < N && K > 0; i++){
        if( N - i > qq[i] ) {
            swap( qq[i], qq[ind[N - i - 1]]);
            swap (ind[qq[i] - 1], ind[qq[ind[N - i - 1]] - 1]);
            --K;
        }
    }
    for(int i = 0; i < N; i++) cout << qq[i] << " ";
    return 0;
}
