//
// Created by mario on 2023/7/26.
//
// chapter-4.1.9
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
struct Student{
    char name[16];
    int score1;
    int score2;
} stu[1000];
int cmp1(Student a,Student b){
    if (a.score1 != b.score1) return a.score1 > b.score1;
    else return strcmp(a.name,b.name) < 0;
}
int cmp2(Student a,Student b){
    if (a.score2 != b.score2) return a.score2 > b.score2;
    else return strcmp(a.name,b.name) < 0;
}
int cmp3(Student a,Student b){
    if ((a.score1 + a.score2) != (b.score1 + b.score2)) return (a.score1 + a.score2) > (b.score1 + b.score2);
    else return strcmp(a.name,b.name) < 0;
}
int n,k;

int main(){
    scanf("%d%d",&n,&k);
    for (int i = 0; i < n; ++i) {
        scanf("%s%d%d",stu[i].name,&stu[i].score1,&stu[i].score2);
    }
    if (k == 1){
        sort(stu,stu+n,cmp1);
    } else if (k == 2){
        sort(stu,stu+n,cmp2);
    } else{
        sort(stu,stu+n,cmp3);
    }
    for (int i = 0; i < n; ++i) {
        printf("%s %d %d %d\n",stu[i].name,stu[i].score1,stu[i].score2,stu[i].score1+stu[i].score2);
    }
    return 0;
}