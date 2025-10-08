#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle r;

    r.length = 10;
    r.breadth = 5;

    cout<<"Area of the rectangle= "<<r.length*r.breadth;
}