#include<iostream>
using std::cout;
using std::cin;
int main(){
    int n=5;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            char ch = 'A'+i;
            cout << ch;
        }
        cout << "\n";
    }
}