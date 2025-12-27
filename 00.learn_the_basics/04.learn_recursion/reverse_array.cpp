#include<iostream>
#include<algorithm>

void printArr(int arr[], int len, std::string msg){
    std::cout << msg << "\n";
    for(int i=0; i<len; i++){
        std::cout << arr[i] << ", ";
    }
    std::cout << "\n";
}

void reverseArr(int* arr, int s, int e){
    int start = s;
    int end = e-1;
    while(start<end){
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, arr_len, "original: ");


    //built-in
    std::reverse(arr, arr+arr_len);
    printArr(arr, arr_len, "reversed with std::reverse: ");

    // own function
    reverseArr(arr, 0, arr_len);
    printArr(arr, arr_len, "own reverse method: ");

    return 0;
}