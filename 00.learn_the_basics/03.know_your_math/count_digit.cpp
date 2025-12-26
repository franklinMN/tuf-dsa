#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int N = 12345;
    int base = 10;
    int count = 0;

    while(N>=base){
        base *= 10;
        count++;
    }
    cout << count+1 << endl;
    return 0;
}