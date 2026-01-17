#include <bits/stdc++.h>

using namespace std;

bool isSorted(vector<int>& arr, int n){
    bool isAsc = true;
    bool isDec = true;

    // check ascending
    for(int i=0; i<n-1; i++){
        if(!(arr[i] <= arr[i+1])) {
            isAsc = false;
            break;
        }
    }

    if(isAsc) return isAsc;

    // check descending
    for(int i=0; i<n-1; i++){
        if(!(arr[i] >= arr[i+1])) {
            isDec = false;
            break;
        }
    }

    return isDec;
}

int main(){
    
    vector<vector<int>> arr = {
        {1,2,3,4,5},
        {5,4,6,7,8},
        {5,5,5,5,5},
        {5,4,3,2,1}
    };

    for(int i=0; i<arr.size(); i++){
        cout << isSorted(arr[i], arr[i].size()) << endl;
    }
}