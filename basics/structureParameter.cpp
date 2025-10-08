#include<iostream>

using namespace std;


struct Rectangle{
    int length;
    int breadth;
};

// int area(struct Rectangle r1){
//     return r1.length * r1.breadth;
// }

void fun(struct Rectangle *p){
    p->length = 20;
    cout<<"Length:"<<p->length<<endl;
}

int main(){
    struct Rectangle r = {10,5};

    cout<<r.length<<endl;

    fun(&r);
    
    cout<<r.length<<endl;
}