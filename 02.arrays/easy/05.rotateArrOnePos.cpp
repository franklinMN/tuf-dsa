#include <bits/stdc++.h>

using namespace std;

int rotateArrOnePos(vector<int>& arr, int n){
    if(n == 0) return -1;
    if(n == 1) return 0;
    int front = arr.front();
    arr.erase(arr.begin());
    arr.push_back(front);
    return 0;
}
 
int main(){
    
    vector<vector<int>> arr = {
        {1,1,2,2,2,3,3},
        {1,1,1,2,2,3,3,3,3,4,4},
        {0},
        {}
    };

    for(int i=0; i<arr.size(); i++){
        int status = rotateArrOnePos(arr[i], arr[i].size());
        cout << "array " << i+1 << ": ";
        if(status == -1) {
            cout << "empty";
        }else {
            for(auto num : arr[i])
                cout << num << ", ";
        }
        cout << endl;
    }
}