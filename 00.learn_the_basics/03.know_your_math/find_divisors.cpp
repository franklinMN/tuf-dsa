#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

void findDivisor(int N, vector<int>& d){
    for(int i=1 ; i<sqrt(N) ; i++){
        if(N%i==0){
            d.push_back(i);
            d.push_back(N/i);
        }
    }
}

int main(){
    int N = 36;
    vector<int> d;
    findDivisor(N, d);
    std::sort(d.begin(), d.end());
    for(auto i : d){
        cout << i << "  ";
    }
    cout << "\n";
    return 0;
}

