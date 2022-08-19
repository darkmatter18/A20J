#include<iostream>
#include<string>


using namespace std;

int main(int argc, char const *argv[]){
    string inp;
    string hello = "hello";
    int i = 0;
    cin >> inp;
    for(char c:inp){
        if(c == hello[i]){
            i++;
        }
    }
    if(i >= 5){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
