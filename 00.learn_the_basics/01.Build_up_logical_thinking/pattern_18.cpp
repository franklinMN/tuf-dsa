#include<iostream>
using std::cout;
using std::cin;
int main(){
    int n=5;
    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){
            char ch = 'A'+ (n-j);
            cout << ch << " ";
        }
        cout << "\n";
    }
    return 0;
}