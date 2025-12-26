#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int N = 12345;
    int result = 0;
    int r, q=N;
    while(q>0){
        r = q % 10;
        result = result*10 + r;
        q = q / 10;
    }
    if(result == N) cout << N << " is Palindrome.\n";
    else cout << N << " is not Palindrome.\n";
    return 0;
}

