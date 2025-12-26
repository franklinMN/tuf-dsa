#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int countDigit(int N){
    int base = 10;
    int count = 0;
    while(N>=base){
        base *= 10;
        count++;
    }
    return count+1;
}

int power(int r, int k){
    int pow = 1;
    for(int i=0; i<k; i++)
        pow *= r;

    return pow;
}

int armstrong(int number, int count){
    int result = 0;
    int r, q=number;
    while(q>0){
        r = q % 10;
        result += power(r, count);
        q = q / 10;
    }
    return result==number;
}

int main(){
    int N = 153;
    
    if(armstrong(N, countDigit(N)))
        cout << N << " is a armstrong number.\n";
    else
        cout << N << " is not a armstrong number.\n";

    return 0;
}