#include <iostream>
#include <cstring>
 
using namespace std;
 
int main(){
    string str[8] = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"}, inp;
    int len;
    cin >> len >> inp;
    for(int i = 0; i < len; i++){
        if(inp[i] == '.') continue;
        for(int j = 0; j < 8; j++){
            bool flag = false;
            if(str[j].length() != len) continue;
            for(int k = i; k < len; k++){
                if(inp[k] == '.')continue;
                if(str[j][k] == inp[k]) flag = true;
                else{
                    flag = false;
                    break;
                }
            }
            if(flag){
                cout << str[j];
                return 0;
            }
        }
    }
    for(int i = 0; i < 8; i++){
        if(str[i].length() == len){
            cout << str[i] ;
            break;
        }
    }
    return 0;
}