#include<iostream>
using std::cout;
using std::cin;

int maximum(int a, int b){return a>b ? a : b;}
int absolute(int num){ return num<0 ? -num : num; }

int main(){
    int n = 4;
    int size = 2*n - 1; // size = 1 + (n-1)*2
    int mid = size/2;

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            int dist = maximum( absolute(i-mid), absolute(j-mid) );
            cout << dist + 1 << " ";
        }
        cout << "\n";
    }

    return 0;
}