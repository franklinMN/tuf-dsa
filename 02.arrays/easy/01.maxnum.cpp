#include <bits/stdc++.h>

using namespace std;

int findMax(int* arr, int n){
    int m = INT_MIN;
    for(int i=0; i<n; i++){
        m = max(m, arr[i]);
    }
    return m;
}

int main(){
    int arr1[] = {2, 5, 1, 3, 0};
    int arr2[] = {8, 10, 5, 7, 99}; 

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << findMax(arr1, n1) << endl;
    cout << findMax(arr2, n2) << endl;
}