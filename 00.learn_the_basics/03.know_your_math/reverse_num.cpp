#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int N = 12;
    int result = 0;
    int r, q=N;
    while(q>0){
        r = q % 10;
        result = result*10 + r;
        q = q / 10;
    }
    cout << "Original number: " << N << endl;
    cout << "Reversed number: " << result << endl;
    return 0;
}

