#include<iostream>
#include<unordered_set> 

using std::cout;
using std::endl;
using std::unordered_multiset;

int main(){
    // multiset allows duplicate elements
    unordered_multiset<int> ums;

    //insert
    for(int i=0; i<10; i++)
        ums.insert(i);

    
    ums.insert(10);
    ums.insert(10);
    ums.insert(10);

    //iterate
    cout << "Elements: ";
    for(auto it=ums.begin(); it!=ums.end(); it++){
        cout << *it << "  ";
    }
    cout << "\n";

    // display foreach
    cout << "Elements: ";
    for(auto item : ums){
        cout << item << "  ";
    }
    cout << "\n";



    return 0;


}

    // same as before - count, clear, find, erase, size, empty

    // cbegin() - returns a const iterator pointing to first element, so cant modify the element
    // cend() - return const iterator pointing end
    // rbegin() - reverse begin, points the last element
    // rend() - reverse end, points the first element
    // emplace() – to insert an element in the set.
    // max_size() - returns the maximum size the vector can hold, cannot increase more than this

