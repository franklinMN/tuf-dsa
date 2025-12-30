#include<iostream>


using std::cout;
using std::cin;
using std::endl;

void selection_sort( int* arr, int size ){
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]>arr[j]) std::swap(arr[i], arr[j]);
        }
    }
}

int main(){
    int arr[] = {7, 12, 9, 11, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before selection sort : ";
    for(int i=0; i<size; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;

    selection_sort(arr, size);

    cout << "After selection sort : ";
    for(int i=0; i<size; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
}