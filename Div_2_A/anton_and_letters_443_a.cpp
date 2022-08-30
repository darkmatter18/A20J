#include<iostream>
#include<string>
#include<sstream>
#include<set>

using namespace std;

int main(int argc, char const *argv[]){
    string s;
    getline(cin, s);
    s = s.substr(1, s.size()-2);
    stringstream s_stream(s);
    set<string> s_set;

    string sub;
    while(getline(s_stream, sub, ',')){
        s_set.insert(sub);
        s_stream.ignore();
    }

    cout << s_set.size();
    return 0;
}
