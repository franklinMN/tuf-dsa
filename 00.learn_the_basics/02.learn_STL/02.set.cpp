#include<iostream>
#include<set>

using std::cout;
using std::endl;
using std::set;

int main() {
    set <int> s;
    for (int i = 1; i <= 10; i++) s.insert(i);

    cout << "Elements present in the set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << * it << " ";  //If element is found print it
    }
    cout << endl;

    int n = 2;
    if (s.find(2) != s.end()) cout << n << " is present in set" << endl;  //Print the element

    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++)
        cout << * it << " ";
    
    cout << endl;

    cout << "The size of the set is: " << s.size() << endl;  ///Return the size of the set

    if (s.empty() == false) cout << "The set is not empty " << endl;  //If set is not empty and elements are still present in it
    else cout << "The set is empty" << endl;  //If set is empty

    s.clear();
    cout << "Size of the set after clearing all the elements: " << s.size();
}
    // cbegin() - returns a const iterator pointing to first element, so cant modify the element
    // cend() - return const iterator pointing end
    // rbegin() - reverse begin, points the last element
    // rend() - reverse end, points the first element
    // bucket_size() – gives the total number of elements present in a specific bucket in a set.
    // emplace() – to insert an element in the set.
    // max_size() - returns the maximum size the vector can hold, cannot increase more than this
    // max_bucket_count() – to check the maximum number of buckets a set can hold.

