#include<iostream>
#include<string>

using std::cout;
using std::string;
using std::endl;

int printFibonacci(int n, int isPrint=1){
    int a=0, b=1, next=0;

    if(n<=0 ){
        if(isPrint) cout << "0\n";
        return 0;
    }

    if(isPrint) cout << "0" << "  1  ";

    for(int i=2; i<n; i++ ){
        next = a + b;
        if(isPrint) cout << next << "  ";
        a = b;
        b = next;
    }
    if(isPrint) cout << endl;
    return next;
}


int main(){
    int N = 5;
    int testcases[N] = {5, 0, 1, 10, -5};

    for(int i=0; i<N ; i++)
        printFibonacci(testcases[i]);

    cout << "10th fibonacci term is: " << printFibonacci(10, 0);
    return 0;
}