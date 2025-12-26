#include<iostream>

using std::cout;
using std::cin;
int main(){
    int len = 10; // even length only
    int n=len/2;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j<i+1) cout << "*";
            else cout << " ";
        }
        for(int k=n; k>0; k--){
            if(k<=i+1) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }

     for(int i=1; i<n; i++){
        for(int j=0; j<n; j++){
            if(j<n-i) cout << "*";
            else cout << " ";
        }
        for(int k=n; k>0; k--){
            if(k<=n-i) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    return 0;
}