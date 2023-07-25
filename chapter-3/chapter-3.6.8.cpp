//
// Created by mario on 2023/7/25.
//
// chapter-3.6.8
#include <iostream>
#include <cstring>
#define MAX_LEN 21
using namespace std;
char s[MAX_LEN];
bool flag = true;
int main(){
    cin>>s;
    int len = strlen(s);
    if (s[0] >= '0' && s[0] <= '9'){
        cout<<"NO";
        return 0;
    } else{
        for (int i = 0; i < len; ++i) {
            if (!((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')
            || (s[i] >= '0' && s[i] <= '9') || s[i] == '_')){
                flag = false;
                break;
            }
        }
    }
    if (flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}