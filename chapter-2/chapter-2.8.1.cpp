//
// Created by mario on 2023/7/19.
//
// chapter-2.8.1
#include <iostream>
using namespace std;
struct Point{
    int x;
    int y;
    Point(){};
    Point(int _x, int _y){
        x= _x;
        y=_y;
    }
};

int main() {
    int x,y;
    cin>>x>>y;
    Point point = Point(x,y);
    cout<<point.x<<" "<<point.y;
    return 0;
}
