#include<iostream>
using namespace std;

// int main(){
//     int a[5] = {1,2,3,4,5};

//     for(int i =0;i<5;i++){
//         printf("%d",a[i]);
//     }
// }


// int main(){
//     int a[5];
//     a[0] = 12;
//     a[1] = 14;
//     a[2] = 15;

//     cout<<sizeof(a)<<endl;

//     cout<<a[2];

//     return 0;


// }


int main(){
    int a[10] = {1,2,3,4,5};

    for(int i:a){
        cout<<i<<endl;
    }
}