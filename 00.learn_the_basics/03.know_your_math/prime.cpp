#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;

int isPrime(int N){
    if(N<2) return 0; // negative, 0 , 1
    if(N==2) return 1; // 2 only even prime number
    if(N%2==0) return 0; // even numbers
    for(int i=3; i<sqrt(N) ; i+=2){ // iterates only odd numbers
        if(N%i==0) return 0;
    }
    return 1;
}

int main(){
    int N = 13;
    if(isPrime(N)) cout << N << " is a Prime number.\n";
    else cout << N << " is not a prime number.\n";
    return 0;
}