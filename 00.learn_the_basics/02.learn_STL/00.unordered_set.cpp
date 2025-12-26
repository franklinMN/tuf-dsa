#include<iostream>
#include<unordered_set>

using std::unordered_set;
using std::cout;
using std::cin;

int main(){
    unordered_set<int> s;

    // insert element
    for(int i=0; i<10; i++)
        s.insert(i);

    //iterate
    for(auto it = s.begin(); it != s.end(); it++)
        cout << *it << "  ";

    // size
    cout << "\nTotal size: " << s.size() << "\n";

    //find - return pointer of that position
    if(s.find(9) != s.end())
        cout << "Found in set\n";

    if(s.find(99) != s.end())
        cout << "Found in set\n";
    else cout << "Not found in set\n";

    // count - checks boolean
    if(s.count(9)) cout << "Found in set\n";

    // erase
    s.erase(s.begin());
    for(auto it = s.begin(); it != s.end(); it++)
        cout << *it << "  ";

    // clear
    s.clear();

    // empty
    if(s.empty())
        cout << "\nYeah, its empty.\n";

    return 0;
}