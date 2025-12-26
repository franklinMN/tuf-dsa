#include<iostream>
using std::cout;
using std::cin;
int main(){
    int n=5;
    for(int i=0; i<5; i++){
        for(int j=n-i; j>0; j--){
            cout << j;
        }
        cout << "\n";
    }
}