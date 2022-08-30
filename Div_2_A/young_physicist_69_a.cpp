#include<iostream>
 
using namespace std;
 
int main(int argc, char const *argv[]){
    int n;
    int x=0, y=0, z=0;
 
    cin >> n;
 
    for(int _=0; _< n; _++){
        int i, j, k;
        cin >> i >> j >> k;
        x += i;
        y += j;
        z += k;
    }
 
    if (x == 0 && y == 0 && z == 0) cout << "YES";
    else cout << "NO";
 
    return 0;
}