#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int primes[110760];
vector<bool> bits(1000001, false);
void sieve() {
    int upper = (int)sqrt(1000000);
    for(int i = 1; i <= upper; i++) {
        for(int j = 1; j <= upper; j++) {
            int n = 4 * i * i + j * j;
            if (n <= 1000000 && (n % 12 == 1 || n % 12 == 5)) {
                bits.at(n) = !bits.at(n);
            }
            n = 3 * i * i + j * j;
            if (n <= 1000000 && (n % 12 == 7)) {
                bits.at(n) = !bits.at(n);
            }
            n = 3 * i * i - j * j;
            if (i > j && n <= 1000000 && (n % 12 == 11)) {
                bits.at(n) = !bits.at(n);
            }
        }
    }

    for(int i = 5; i <= upper; i++){
        if(bits.at(i)){
            for (int j = i * i; j <= 1000000; j += i * i)
                bits.at((int)j) = false;
        }
    }

    primes[0] = 2;
    primes[1] = 3;
    int count = 2;
    for(int i = 5; i <= 1000000; i += 2){
        if (bits.at(i))
            primes[count++] = i;
    }
}

int main(){
    sieve();
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        long long sum = 0;
        for(int i = 0; primes[i] <= n; i++)
            sum += primes[i];
        cout << sum << endl;
    }
    return 0;
}
