#include<iostream>


using std::cout;
using std::cin;
using std::endl;

void bubble_sort( int* arr, int size ){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]) std::swap(arr[j], arr[j+1]);
        }
    }
}

int main(){
    int arr[] = {7, 12, 9, 11, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before bubble sort : ";
    for(int i=0; i<size; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;

    bubble_sort(arr, size);

    cout << "After bubble sort : ";
    for(int i=0; i<size; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
}