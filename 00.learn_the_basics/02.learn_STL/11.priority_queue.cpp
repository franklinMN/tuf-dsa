#include<iostream>
#include<queue>
#include<vector>

using std::cout;
using std::cin;
using std::endl;

using std::priority_queue;

int main(){
    priority_queue<int> pq;

    pq.push(10);
    pq.push(12);
    pq.push(50);
    pq.push(1);

    while(!pq.empty()){
        cout << pq.top() << "  ";
        pq.pop();
    }
    cout << "\n";

    cout << "Top element: " << pq.top() << endl;
    cout << "Size of queue: " << pq.size() << endl;

    priority_queue<int, std::vector<int>, std::greater<int>> pq2;

    pq2.push(10);
    pq2.push(12);
    pq2.push(1);
    pq2.push(50);

    while(!pq2.empty()){
        cout << pq2.top() << "  ";
        pq2.pop();
    }
    cout << "\n";

    cout << "Top element: " << pq2.top() << endl;
    cout << "Size of queue: " << pq2.size() << endl;
    return 0;
}