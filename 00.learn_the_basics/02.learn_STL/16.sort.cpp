#include<iostream>
#include<algorithm>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::sort;
using std::pair;

bool sortKeyAsc( const pair<int, int> &a, const pair<int, int> &b ){
    return a.first < b.first;
}

bool sortValueAsc( const pair<int, int> &a, const pair<int, int> &b ){
    return a.second < b.second;
}

int main() {
    int arr[] = {10, 9, 8, 45, 0, -8, -99};
    int arr_len = sizeof(arr) / sizeof(arr[0]);

    // partial sort
    sort(arr, arr+3);
    for(int i=0; i<arr_len ; i++){
        cout << arr[i] << ", ";
    }
    cout << "\n";

    //full sort
    sort(arr, arr+arr_len);
    for(int i=0; i<arr_len ; i++){
        cout << arr[i] << ", ";
    }
    cout << "\n";

    // decending sort
    vector<int> v = {1, 2, 3, 4, 5};
    sort(v.begin(), v.end(), std::greater<int>());
    for(auto it:v)
        cout << it << ", ";
    cout << "\n";

    // with own compare function
    vector<std::pair<int, int>> pv = {{0, 1}, {-85, 1}, {11, 1}, {8, 5}, {7, 10}};
    sort(pv.begin(), pv.end(), sortKeyAsc);
    for(auto it:pv){
        std::printf("{%d, %d}, ", it.first, it.second);
    }
    cout << endl;


    sort(pv.begin(), pv.end(), sortValueAsc);
    for(auto it:pv){
        std::printf("{%d, %d}, ", it.first, it.second);
    }
    cout << endl;

    return 0;
}