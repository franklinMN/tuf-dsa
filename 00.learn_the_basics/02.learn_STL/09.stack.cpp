#include<iostream>
#include<stack>

using std::cout;
using std::cin;
using std::endl;

using std::stack;

void printS(stack<int> q){
    //display
    while(!q.empty()){
        cout << q.top() << "  ";
        q.pop();
    }
    cout << "\n";
}

int main(){
    stack<int> s;

    // add elements
    s.push(10);
    s.push(20);
    s.push(30);
    
    printS(s);
    cout << "size of q: " << s.size() << endl;
    cout << "Top element of q: " << s.top() << endl;

    //remove
    s.pop();
    s.pop();
    printS(s);

    s.pop();
    printS(s);

    cout << "size of q: " << s.size() << endl;

    return 0;
}