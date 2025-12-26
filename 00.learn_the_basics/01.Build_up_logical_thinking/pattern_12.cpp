#include<iostream>

using std::cout;
using std::cin;
int main(){
    int n=4;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j<i+1) cout << j+1;
            else cout << " ";
        }
        for(int k=n; k>0; k--){
            if(k<=i+1) cout << k;
            else cout << " ";
        }
        cout << "\n";
    }
    return 0;
}