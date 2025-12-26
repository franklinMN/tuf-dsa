#include<iostream>
#include<string>
#include<map>

using std::cout;
using std::endl;
using std::string;
using std::map;

int main(){

    map<string, int> om;

    //insert
    for(int i=1; i<=10; i++){
        string id = "ID-" + std::to_string(i);
        om.insert({id, i*10});
    }

    // iterate
    for(auto it=om.begin(); it!=om.end(); it++){
        cout << "(" << it->first << ": " << it->second << ")";
        cout << ",  ";
    }
    cout << "\n";

    om.insert({"ID-11", 11});

    // Search for an element with key = 2
    string n = "ID-5";
    if (om.find(n) != om.end())  // mp.find(n) returns an iterator to the key if found, else mp.end()
        cout << n << " is present in map" << std::endl;

    // Erase the first element in the map
    // Note: map maintain order of elements
    om.erase(om.begin());

    //iterate 2
    for(auto it : om){
        cout << "(" << it.first << ": " << it.second << ")";
        cout << ",  ";
    }
    cout << "\n";


        // Check whether the map is empty or not
    if (!om.empty())  // mp.empty() returns true if the map has no elements
        cout << "The map is not empty " << endl;
    else
        cout << "The map is empty" << endl;

    // Clear all elements from the map
    om.clear();

        // Check whether the map is empty or not
    if (!om.empty())  // mp.empty() returns true if the map has no elements
        cout << "The map is not empty " << endl;
    else
        cout << "The map is empty" << endl;


    return 0;
}

    // cbegin() - returns a const iterator pointing to first element, so cant modify the element
    // cend() - return const iterator pointing end
    // rbegin() - reverse begin, points the last element
    // rend() - reverse end, points the first element
    // emplace() – to insert an element in the set.
    // max_size() - returns the maximum size the vector can hold, cannot increase more than this

