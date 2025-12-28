#include<iostream>
#include<string>
#include<unordered_map>

using std::cout;
using std::string;
using std::endl;
using std::unordered_map;

using umapii = unordered_map<int, int>;

void calcFreq(const int* arr, int len, umapii& m){
    for(int i=0 ; i<len ; i++) m[arr[i]] += 1;
}

void printM(const umapii& m){
    for(auto it:m) cout << "{" << it.first << ", " << it.second << "}\n";
    cout << endl;
}

void findHigHLowFreq( const umapii& m, int* h, int* l){
    if (m.empty()) {
        *h = *l = 0;
        return;
    }
    *h = m.begin()->second;
    *l = m.begin()->second;
    for(auto it:m){
        if(it.second > *h) *h = it.second;
        if(it.second < *l) *l = it.second;
    }
}

int main(){
    
    int testcases[] = {10,5,10,15,10,5};
    int N = sizeof(testcases) / sizeof(testcases[0]);
    umapii m;
    calcFreq(testcases, N,  m);
    printM(m);

    int highF;
    int lowF;
    findHigHLowFreq(m, &highF, &lowF);
    cout  << lowF << "  " << highF << "\n";
    return 0;
}