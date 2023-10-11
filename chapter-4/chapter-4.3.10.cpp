//
// Created by mario on 2023/10/11.
//
// chapter-4.3.10
/**
 * 思路：先把上面n-1个盘子移动到中间柱子，再把最后一个移动到目的地，最后把n-1个盘子移动到目的地
 * 次数：公式法：2^n-1
 */

#include "iostream"
#include "cmath"

using namespace std;


void Hanoi(int n,char from,char to,char mid){
    if (n == 0) return;
    else {
        Hanoi(n-1,from,mid,to);
        printf("%c->%c\n",from,to);
        Hanoi(n-1,mid,to,from);
    }
}

int main(){
    int n;
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    Hanoi(n,'A','C','B');
    return 0;
}
