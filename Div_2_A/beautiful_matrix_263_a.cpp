#include<iostream>
#include<cstdlib>

int main(int argc, char const *argv[]){
    int i, j;
    for(int k = 0; k<5; k++){
        int a,b,c,d,e;
        std::cin >> a >> b >> c >> d >> e;
        if(a == 1){
            j = 0;
            i = k;
        }
        if (b == 1){
            j = 1;
            i = k;
        }
        if (c == 1){
            j = 2;
            i = k;
        }
        if (d == 1){
            j = 3;
            i = k;
        }
        if (e == 1){
            j = 4;
            i = k;
        }
    }
    std::cout << abs(i - 2) + abs(j - 2);
    return 0;
}
