#include<iostream>


using std::cout;
using std::cin;
using std::endl;

void insertion_sort( int* arr, int size ){
    for(int i=1; i<size; i++){
        int key=arr[i];
        int key_idx = i;
        while(key_idx > 0 && arr[key_idx-1] > key ){
            arr[key_idx] = arr[key_idx - 1];
            key_idx--;
        }
        arr[key_idx] = key;
    }
}

int main(){
    int arr[] = {7, 12, 9, 11, 3, 10, 12, 13};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before insertion sort : ";
    for(int i=0; i<size; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;

    insertion_sort(arr, size);

    cout << "After insertion sort : ";
    for(int i=0; i<size; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
}