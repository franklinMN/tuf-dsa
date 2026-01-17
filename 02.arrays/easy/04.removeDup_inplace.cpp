#include <bits/stdc++.h>

using namespace std;

int removeDup_inPlace(vector<int>& arr, int n){
    if(n == 0) return -1;
    if(n == 1) return 1;
    int pos = 0;
    for(int i=0; i<n; i++){
        if(arr[i]!=arr[pos]){
            arr[++pos] = arr[i];
        }
    }
    return pos + 1;
}
 
int main(){
    
    vector<vector<int>> arr = {
        {1,1,2,2,2,3,3},
        {1,1,1,2,2,3,3,3,3,4,4},
        {0},
        {}
    };

    for(int i=0; i<arr.size(); i++){
        cout << "Uniques: " << removeDup_inPlace(arr[i], arr[i].size()) << endl;
    }
}