#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[]){
    string s, s2;
    cin >> s;

    for(char i: s){
        if(!(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' || i == 'y' || i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U' || i == 'Y')){
            s2.append(".");
            if(isupper(i)){
                char a = tolower(i);
                s2 += a;
            } else{
                s2 += i;
            }

        }
    }

    cout << s2;
    return 0;
}
