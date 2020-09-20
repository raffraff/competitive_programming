#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<unsigned long long> v;

template<class Iter, class T>
Iter binary_find(Iter begin, Iter end, T val){
    Iter i = lower_bound(begin, end, val);
    if (i != end && !(val < *i)) return i;
    else return i - 1;
}

void precomp(){
    long long i = 1, sum = 0;
    do {
        sum = (((i * (i + 1))*(2*i + 1))/6);
        v.push_back(sum);
        i++;
    }while(sum <= 1e16);
}
unsigned long long x;
int main() {
    precomp();
    int t;
    cin >> t;
    while(t--){
        cin >> x;
        vector<unsigned long long>::iterator n = binary_find(v.begin(),v.end(),x);
        cout << n - v.begin() + 1 << endl;
    }
    return 0;
}