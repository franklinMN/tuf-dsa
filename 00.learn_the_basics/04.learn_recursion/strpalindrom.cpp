#include<iostream>
#include<string>

using std::cout;
using std::string;
using std::endl;

int palindrom(string& s, int start, int end){
    if(start>=end) return 1;
    if(s[start]!=s[end-1]) return false;
    else return palindrom(s, ++start, --end);
}

int main(){
    string s = "A";
    string teststrings[] = { "A", "ABCBA", "ABCbA", "ABCCA", "FRANK" };

    for(string s : teststrings){
        if(palindrom(s, 0, s.length()))
            cout << s << " is palindrom.\n";
        else cout << s << " is not a palindrom.\n";
    }

    return 0;
}