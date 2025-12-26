#include<iostream>
#include<algorithm>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::next_permutation;
using std::vector;

int main(){
    vector<int> v = {1, 2, 3};
    do{
        for(int i:v) cout << i << " ";
        cout << endl;
    }while(next_permutation(v.begin(), v.end()));
    return 0;
}