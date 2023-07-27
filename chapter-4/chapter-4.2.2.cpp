//
// Created by mario on 2023/7/27.
//
// chapter-4.2.2
#include <cstdio>
#include <cstring>
using namespace std;
int hashFunc(char c){
    return c - 'a';
}
int hashTable[26+10] = {0};
char temp[101];
int main(){
    scanf("%s",temp);
    int len = strlen(temp);
    for (int i = 0; i < len; ++i) {
        hashTable[hashFunc(temp[i])]++;
    }
    for (int i = 0; i < 35; ++i) {
        if(hashTable[i] != 0){
            printf("%c %d\n",i+'a',hashTable[i]);
        }
    }
    return 0;
}
