//
// Created by mario on 2023/7/26.
//
// chapter-4.1.12
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
struct Student{
    char name[16];
    int score;
    int local_rank;
} stu[1010];
int n,k;
int sum = 0;
int cmp1(Student a,Student b){
    return a.score > b.score;
}
int cmp2(Student a,Student b){
    return strcmp(a.name,b.name) < 0;
}

int main(){
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>k;
        for (int j =sum; j < sum+k; ++j) {
            cin>>stu[j].name>>stu[j].score;
        }
        sum = sum + k;
        sort(stu+sum-k,stu+sum,cmp1);
        // 处理场内排名
        int r = 1;
        for (int j = sum-k; j < sum; ++j) {
            if (j > sum - k && stu[j].score != stu[j-1].score) r = j-sum+k + 1;
            stu[j].local_rank = r;
        }
    }
    sort(stu,stu+sum, cmp2);
    for (int i = 0; i < sum; ++i) {
        cout<<stu[i].name<<" "<<stu[i].score<<" "<<stu[i].local_rank<<endl;
    }
    return 0;
}