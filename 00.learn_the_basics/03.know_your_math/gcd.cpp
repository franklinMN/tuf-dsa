#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int gcd(int n1, int n2){
    // Euclidean algorithm
    while(n1>0 && n2>0){
        if(n1>n2) n1 -= n2;
        else n2 -= n1;
    }
    return n1==0 ? n2 : n1;
}

int main(){
    int n1 = 9;
    int n2 = 12;
    int GCD = gcd(n1, n2);

    std::printf("GCD of %d and %d is %d.\n", n1, n2, GCD);

    return 0;
}

