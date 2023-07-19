//
// Created by mario on 2023/7/19.
//
// chapter-2.5.11
#include <iostream>
using namespace std;
char s[100];
int main() {
    int A,B,C;
    cin.getline(s,100);
    if (sscanf(s,"%d is greater than %d",&A,&B)==2){
        printf("%s",A>B?"Yes":"No");
    } else if (sscanf(s,"%d is equal to %d plus %d",&A,&B,&C)==3){
        printf("%s",(A==(B+C))?"Yes":"No");
    } else{
        printf("???");
    }
    return 0;
}
