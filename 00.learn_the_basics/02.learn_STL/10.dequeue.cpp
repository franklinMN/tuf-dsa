#include<iostream>
#include<deque>

using std::cout;
using std::cin;
using std::endl;

using std::deque;

void printS(deque<int> q){
    //display
    for(const int& item : q)
        cout << item << "  ";
    cout << "\n";
}

int main(){
    deque<int> dq;

    // add elements
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    
    printS(dq);
    cout << "size of q: " << dq.size() << endl;
    cout << "Front element of q: " << dq.front() << endl;
    cout << "Back element of q: " << dq.back() << endl;
    cout << "Element at index 1: " << dq.at(1) << endl;
    cout << "is empty?: " << dq.empty() << endl;
    

    //remove
    dq.pop_back();
    dq.pop_back();
    printS(dq);

    dq.pop_back();
    printS(dq);

    dq.push_front(90);
    dq.push_front(98);
    dq.push_front(97);
    printS(dq);

    dq.pop_front();
    dq.pop_front();
    
    printS(dq);

    cout << "size of q: " << dq.size() << endl;

    dq.clear(); // clears entire queue
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(90);
    dq.push_front(98);
    dq.push_front(97);
    printS(dq);

    deque<int>::iterator iterator;
    iterator = dq.begin();
    cout << "Using iterator, element at [0]: " << *iterator << endl;
    iterator = dq.begin()+1;
    cout << "Using iterator, element at [1]: " << *iterator << endl;
    iterator = dq.begin()+2;
    cout << "Using iterator, element at [2]: " << *iterator << endl;
    iterator = dq.end()-1;
    cout << "Using iterator, last element: " << *iterator << endl;

    return 0;
}