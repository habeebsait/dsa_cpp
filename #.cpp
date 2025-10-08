#include<iostream>

using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7};

    int x = 2;

    int low = 0;

    int high = sizeof(arr)/sizeof(arr[0]);

    int mid =  (low + high)/2;

    while (true){
        mid = (low+high)/2;
        if (arr[mid] == x){
            cout<<"The element is at "<<mid<<"th position";
            break;
        }

        else if(x > arr[mid]){
            low = mid+1;
        }

        else{
            high = mid-1;
        }


    }

}