#include <bits/stdc++.h>

using namespace std;

void reverse(vector<int>& arr, int start, int end){
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int rotateArrKPos(vector<int>& arr, int n, int k, int dir=0){
    if(n==0) return -1;
    if(n==1 || k==0) return 0;

    k = k % n;

    if(dir==0){
        reverse(arr, 0, k-1);
        reverse(arr, k, n-1);
        reverse(arr, 0, n-1);
    }else{
        reverse(arr, 0, n-1);
        reverse(arr, 0, k-1);
        reverse(arr, k, n-1);
    }
    return 0;
}
 
int main(){
    int k[] = {2, 0, 1, 3};
    int dir[] = {0, 1, 0, 1}; // 0 left, 1 right
    vector<vector<int>> arr = {
        {1,1,2,2,2,3,3},
        {1,1,1,2,2,3,3,3,3,4,4},
        {0},
        {}
    };

    for(int i=0; i<arr.size(); i++){
        int status = rotateArrKPos(arr[i], arr[i].size(), k[i]);
        cout << "array " << i+1 << ": ";
        if(status == -1) {
            cout << "empty";
        }else {
            for(auto num : arr[i])
                cout << num << ", ";
        }
        cout << endl;
    }


    int k2[] = {2, 0, 1, 3};
    vector<vector<int>> arr2 = {
        {1,1,2,2,2,3,3},
        {1,1,1,2,2,3,3,3,3,4,4},
        {0},
        {}
    };

    for(int i=0; i<arr2.size(); i++){
        int status = rotateArrKPos(arr2[i], arr2[i].size(), k2[i], 1);
        cout << "array2 " << i+1 << ": ";
        if(status == -1) {
            cout << "empty";
        }else {
            for(auto num : arr2[i])
                cout << num << ", ";
        }
        cout << endl;
    }
}