#include<iostream>
using namespace std;

// int main(){
//     int a = 10;
//     int *p;

//     p = &a;

//     cout<<*p;
// }


// int main(){

//     int a[5] = {1,2,3,4};

//     int *p;

//     p = a;

//     cout<<*p;
// }


struct rect{
    int l;
    int b;
};

int main(){
    struct rect *p;

    p = new rect;

    p->l = 15;
    p->b = 10;



    cout<<p->l<<endl;
    cout<<p->b<<endl;


}