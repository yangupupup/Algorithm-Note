//
// Created by mario on 2023/10/11.
//
// chapter-4.3.3
/**
 * 思路：从前n-1个数中找出最大的数与第n个数进行比较
 * 递归边界是：n == 1
 * 实现：可以使用递归算法，也可以使用常规非递归算法
 */

#include "iostream"
#include "algorithm"
#define MAX 100+1

int n;
int number[MAX]={0};

using namespace std;

int findMax(int n){
    if (n == 1) return number[1];
    else return max(findMax(n-1),number[n]);
}

int main(){
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        cin>>number[i];
    }
    cout<<findMax(n);
    return 0;
}
