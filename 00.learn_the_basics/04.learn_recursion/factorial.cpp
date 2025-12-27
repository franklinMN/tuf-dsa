#include<iostream>

int factorial(int N){
    if(N<0) return -1;
    if(N==0 || N==1) return 1;
    return N * factorial(N-1);
}
int main(){
    int N = 5;
    std::cout << "Factorial of " << N << " is " << factorial(N) << std::endl;
    std::cout << "Factorial of " << "0" << " is " << factorial(0) << std::endl;
    std::cout << "Factorial of " << "-10" << " is " << factorial(-10) << std::endl;
    return 0;
}