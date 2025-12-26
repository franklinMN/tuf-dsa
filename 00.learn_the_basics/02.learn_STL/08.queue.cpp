#include<iostream>
#include<queue>

using std::cout;
using std::cin;
using std::endl;

using std::queue;

void printQ(queue<int> q){
    //display
    while(!q.empty()){
        cout << q.front() << "  ";
        q.pop();
    }
    cout << "\n";
}

int main(){
    queue<int> q;

    // add elements
    q.push(10);
    q.push(20);
    q.push(30);
    
    printQ(q);
    cout << "size of q: " << q.size() << endl;

    //remove
    q.pop();
    q.pop();
    printQ(q);

    q.pop();
    printQ(q);

    cout << "size of q: " << q.size() << endl;

    
    return 0;
}