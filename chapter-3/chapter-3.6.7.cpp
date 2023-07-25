//
// Created by mario on 2023/7/25.
//
// chapter-3.6.7
/**
 * 1、索引指向当前字符，输出当前字符
 * 2、依次向后移动索引，如果字符相同，则计数器+1
 * 3、每次向后比较完，重制初始条件
 */
#include <iostream>
#include <cstring>
using namespace std;
char s[101];
int num = 1;
bool flag = true;
int main(){
    cin>>s;
    int len = strlen(s);
    int step = 1;
    for (int i = 0; i < len; ++i) {
        cout<<s[i]<<" ";
        while (s[i] == s[i + 1]){
            num++;
            i++;
        }
        cout<<num<<endl;
        step = 1;
        num = 1;
    }
    return 0;
}
