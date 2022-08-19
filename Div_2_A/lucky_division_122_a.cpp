#include<iostream>

using namespace std;

bool is_lucky(int n){
    string s = to_string(n);
    for(char c : s){
        if(c != '4' && c != '7'){
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[]){
    int n;
    int i = 1;
    cin >> n;
    bool l = false;
    while (i <= n/2){
        if (n%i==0 && is_lucky(n / i)){
            l = true;
            break;
        }
        i++;
    }

    if (l){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
