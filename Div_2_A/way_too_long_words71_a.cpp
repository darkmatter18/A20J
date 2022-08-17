#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[]){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;

        if(str.length() > 10){
            char f = str[0];
            char l = str.back();
            cout << f + to_string(str.length()-2) + l << endl;
            
        } else {
            cout << str << endl;
        }
    }

    return 0;
}
