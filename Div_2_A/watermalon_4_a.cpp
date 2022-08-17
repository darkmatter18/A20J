#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
    int k;
    cin >> k;
    
    if(k > 2 && k%2==0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
