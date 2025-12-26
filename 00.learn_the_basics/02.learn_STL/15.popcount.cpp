#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int n = 7;
    cout << __builtin_popcount(n) << endl;
    long long ll = 77777777777777777;
    cout << __builtin_popcountll(ll) << endl;
    return 0;
}