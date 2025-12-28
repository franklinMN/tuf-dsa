#include<iostream>
#include<string>
#include<unordered_map>

using std::cout;
using std::string;
using std::endl;
using std::unordered_map;

void calcFreq(const int* arr, int len, unordered_map<int, int>& m){
    for(int i=0 ; i<len ; i++) m[arr[i]] += 1;
}

void printM(const unordered_map<int, int>& m){
    for(auto it:m) cout << "{" << it.first << ", " << it.second << "}\n";
    cout << endl;
}

int main(){
    
    int testcases[] = {5, 0, 1, 10, -5, 1, 1, 1, 5, 0, 0, 9};
    int N = sizeof(testcases) / sizeof(testcases[0]);
    unordered_map<int, int> m;
    calcFreq(testcases, N,  m);
    printM(m);
    return 0;
}