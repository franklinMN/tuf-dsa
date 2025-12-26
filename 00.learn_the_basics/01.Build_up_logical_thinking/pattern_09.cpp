#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
int main(){
    // int n=5;
    // int s = 1 + (n-1)*2;
    // s = 1 + 2n - 2
    // s = 2n-1
    // s + 1 = 2n
    // (s+1)/2 = n

    int size = 9;
    int n = (size+1)/2; // n and size should be odd number, or else diamond wont be formed
    int mid = size/2;

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            // formula for calculating diamond
            int dist = abs(i-mid) + abs(j-mid);
            int val = n-dist;
            if(val>=1){
                cout << "*" << "";
            }else{
                cout << " ";
            }
        }
        cout << "\n";
    }


}