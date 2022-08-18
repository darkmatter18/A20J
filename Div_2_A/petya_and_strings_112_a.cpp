#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[]){
    string s1, s2;
    cin >> s1;
    cin >> s2;
    bool same = true;

    for (int i = 0; i < s1.length(); i++)
    {
        char a,b;
        if(isupper(s1[i]))
            a = tolower(s1[i]);
        else
            a = s1[i];

        if(isupper(s2[i]))
            b = tolower(s2[i]);
        else
            b = s2[i];
        
        if(a > b){
            cout << 1;
            same = false;
            break;
        } else if(b > a){
            cout << -1;
            same = false;
            break;
        } 
    }
    if(same){
        cout << 0;
    }

    return 0;
}
