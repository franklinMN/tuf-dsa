#include<iostream>
#include<map>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::multimap;
using std::map;

void printMM(multimap<int, int>& mm){
    for(auto it : mm){
        std::printf("(%d, %d), ", it.first, it.second);
    }
    cout << endl;
}

void printM(map<std::string, int>& m){
    for(auto it : m){
        std::printf("(%s, %d), ", (it.first).c_str(), it.second);
    }
    cout << endl;
}

int main(){
    multimap<int, int> mm;
    for(int i=1; i<=5; i++)
        mm.insert({0, i});

    printMM(mm);
    // insert duplicates
    mm.insert({0,2});
    mm.insert({0,2});
    mm.insert({0,2});
    printMM(mm);

    // map dont take duplicate keys
    map<std::string, int> m = {{"same_key", 1}, {"same_key", 2}, {"same_key", 3} , {"different_key", 2}};
    printM(m);
    return 0;
}