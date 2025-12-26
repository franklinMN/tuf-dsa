#include<iostream>
#include<string>
#include<unordered_map>

using std::cout;
using std::endl;
using std::string;
using std::unordered_map;

int main(){

    unordered_map<string, int> um;

    //insert
    for(int i=1; i<=10; i++){
        string id = "ID-" + std::to_string(i);
        um.insert({id, i*10});
    }

    // iterate
    for(auto it=um.begin(); it!=um.end(); it++){
        cout << "(" << it->first << ": " << it->second << ")";
        cout << ",  ";
    }
    cout << "\n";

    um.insert({"ID-11", 11});

    // Search for an element with key = 2
    string n = "ID-5";
    if (um.find(n) != um.end())  // mp.find(n) returns an iterator to the key if found, else mp.end()
        cout << n << " is present in map" << std::endl;

    // Erase the first element in the map
    // Note: unordered_map does not maintain any order of elements
    um.erase(um.begin());

    //iterate 2
    for(auto it : um){
        cout << "(" << it.first << ": " << it.second << ")";
        cout << ",  ";
    }
    cout << "\n";


        // Check whether the map is empty or not
    if (!um.empty())  // mp.empty() returns true if the map has no elements
        cout << "The map is not empty " << endl;
    else
        cout << "The map is empty" << endl;

    // Clear all elements from the map
    um.clear();

        // Check whether the map is empty or not
    if (!um.empty())  // mp.empty() returns true if the map has no elements
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

