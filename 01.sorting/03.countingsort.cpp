#include<iostream>
#include<algorithm>

using std::cout;
using std::cin;
using std::endl;

void counting_sort( int* arr, int size, int* result ){
    // find min and max
    // initialize aux array with max
    // handle all element as element + min (handles nagative)
    // store frequecies of elements in aux array
    // create result array with aux array

    if(size<0) return;

    int min = arr[0];
    int max = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i]<min) min = arr[i];
        if(arr[i]>max) max = arr[i];
    }

    // cout << min << " " << max << endl;
    long long range = (long long)max - (long long)min;
    if(range > 10LL * (long long)size){
        std::copy(arr, arr+size, result);
        std::sort(result, result+size);
        return;
    }
    
    int shift = min<0 ? -min : 0;
    int aux_size = max + shift + 1; // + 1 to include the max value as index in aux
    int* aux = new int[aux_size]();
    for(int i=0; i<size ; i++){
        aux[ arr[i] + shift ] += 1;
    }


    int j=0;
    for(int i=0; i<aux_size; i++){
        int temp = aux[i];
        while(temp--) result[j++] = i - shift;
    }

    delete[] aux;
}

int main(){
    int arr3[] = {7, 12, 9, 11, 3, 10, 12, 12, 12, 12, 13, 0, 0, 0 ,-1, -8, -8, -8, -10};
    int arr2[] = {7, 12, 9, 11, 3, 10, 12, 12, 12, 12, 13, 0, 0, 0};
    int arr[] = {INT_MAX, INT_MIN, 0, INT_MAX, 0, INT_MIN};
    int size = sizeof(arr) / sizeof(arr[0]);
    int* result = new int[size]();

    cout << "Before counting sort : ";
    for(int i=0; i<size; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;

    counting_sort(arr, size, result);

    cout << "After counting sort : ";
    for(int i=0; i<size; i++){
        cout << result[i] << ", ";
    }
    cout << endl;

    delete[] result;
    return 0;
}