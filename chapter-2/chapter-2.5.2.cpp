//
// Created by mario on 2023/7/19.
//
// chapter-2.5.2
#include <cstdio>
void swap(int& a,int& b){
    int temp=a;
    a=b;
    b =temp;
}
void bubbleSort(int num[],int len){
    for (int i = 1; i <= len-1; ++i) {
        for (int j = 0; j <= len - i - 1; ++j) {
            if(num[j] > num[j+1]) swap(num[j],num[j+1]);
        }
    }
}
int input[100] = {0};
int main() {
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d",&input[i]);
    }
    bubbleSort(input,n);
    for (int i = 0; i < n; ++i) {
        printf("%d",input[i]);
        if(i!=(n-1)) printf(" ");
    }
    return 0;
}
