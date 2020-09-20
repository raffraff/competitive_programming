#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    int a[26] = {0}, max = 0;
    char ans;
    cin >> s;
    int n = s.length();
    for(int i = 0; i < n; i++){
        int tmp = s[i] - 'a';
        ++a[tmp];
        if(a[tmp] >= max) {
            max = a[tmp];            
        }
    }
    for(int i = 0; i < 26; i++){
        if(a[i] == max){
            ans = (i + 'a');
            break;
        }
    }
    printf("%c",ans);
    return 0;
}