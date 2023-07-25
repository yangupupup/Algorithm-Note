//
// Created by mario on 2023/7/24.
//
// chapter-3.6.1
#include <iostream>
#include <cstring>
using namespace std;
char s[51];
bool flag = true;
int main(){
    scanf("%s",s);
    int len = strlen(s);
    for (int i = 0; i < len / 2; ++i) {
        if (s[i] != s[len-1-i]){
            flag = false;
            break;
        }
    }
    if (flag) printf("YES");
    else printf("NO");
    return 0;
}
