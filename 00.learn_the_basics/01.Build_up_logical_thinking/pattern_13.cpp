#include<iostream>

using std::cout;
using std::cin;
int main(){
    int n=5;
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << ++count << " ";
        }
        cout << "\n";
    }
    return 0;
}