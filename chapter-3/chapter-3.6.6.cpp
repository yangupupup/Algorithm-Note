//
// Created by mario on 2023/7/25.
//
// chapter-3.6.6
/**
 * 如何比较：
 *  对于某一个确定的字符位置，对所有字符串再该位置进行遍历。
 */
#include <iostream>
#include <cstring>
#define MAX_N 20
#define MAX_LEN 51
using namespace std;
int n;
char s[MAX_N][MAX_LEN];
int num;
bool isEmpty = true;
int main(){
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>s[i];
    }
    // 处理
    int len = strlen(s[0]);
    for (int i = 0; i < len; ++i) {
        bool flag = true;
        for (int j = 0; j < n; ++j) {
            if (s[0][i] != s[j][i]){
                flag = false;
                break;
            }
        }
        if (flag){
            printf("%c",s[0][i]);
            isEmpty = false;
        }
        else break;
    }
    if (isEmpty) printf("\n");
    return 0;
}
