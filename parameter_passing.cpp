#include<iostream>

using namespace std;


// call by value

// void swap(int x , int y){
//     int temp = x;
//     x =y;
//     y = temp;
// }

// int main(){
//     int a = 10;
//     int b = 5;

//     cout<<a<<endl;
//     cout<<b<<endl;

//     swap(a,b);

//     cout<<a<<endl;
//     cout<<b<<endl;

// }


// call by address

// int swap(int *x , int *y){
//     int temp =* x;
//     *x =*y;
//     *y = temp;
// }

// int main(){
//     int a = 10;
//     int b = 5;

//     cout<<a<<endl;
//     cout<<b<<endl;

//     swap(&a,&b);

//     cout<<a<<endl;
//     cout<<b<<endl;
// }


// call by reference

// int swap(int &x , int &y){
//     int temp = x;
//     x =y;
//     y = temp;
// }

// int main(){
//     int a = 10;
//     int b = 5;

//     cout<<a<<endl;
//     cout<<b<<endl;

//     swap(&a,&b);

//     cout<<a<<endl;
//     cout<<b<<endl;
// }



// array as a paramenter
// void fun(int a[], int n){
//     a[0]= 10;

// }

// int main(){
//     int a[5] = {1,2,3,4,5};

//     int n = sizeof(a)/sizeof(int);


//     fun(a,n);

//     cout<<a[0];
// }

