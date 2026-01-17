#include <bits/stdc++.h>

using namespace std;

int secondSmall(int* arr, int n){
    int firstSmall = INT_MAX;
    int secondSmall = firstSmall;

    for(int i=0; i<n; i++){
        if(arr[i] < firstSmall){
            secondSmall = firstSmall;
            firstSmall = arr[i];
        }else if( arr[i] < secondSmall && arr[i] != firstSmall ){
            secondSmall = arr[i];
        }
    }
    return secondSmall;
}

int secondBig(int* arr, int n){
    int firstBig = INT_MIN;
    int secondBig = firstBig;

    for(int i=0; i<n; i++){
        if(arr[i] > firstBig){
            secondBig = firstBig;
            firstBig = arr[i];
        }else if( arr[i] > secondBig && arr[i] != firstBig ){
            secondBig = arr[i];
        }
    }
    return secondBig;
}

int main(){
    int arr1[] = {1, 2, 4, 7, 7, 5};
    int arr2[] = {8, 10, 5, 7, 99};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << secondSmall(arr1, n1) << endl;
    cout << secondSmall(arr2, n2) << endl;

    cout << secondBig(arr1, n1) << endl;
    cout << secondBig(arr2, n2) << endl;
}