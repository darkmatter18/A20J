#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[]){
    string ip, stra, strb, strc, op;
    int a=0,b=0,c=0;
    cin >> ip;

    for(char i:ip){
        if(i != '+'){
            if(i == '1'){
                a++;
            } else if(i == '2'){
                b++;
            } else if(i == '3'){
                c++;
            }
        }
    }

    if(a > 0) stra.append("1");
    for (int i = 0; i < a-1; i++) stra.append("+1");

    if(b > 0) strb.append("2");
    for (int i = 0; i < b-1; i++) strb.append("+2");

    if(c > 0) strc.append("3");
    for (int i = 0; i < c-1; i++) strc.append("+3");


    if(stra.length() > 0) op.append(stra);
    if(stra.length() > 0 && (strb.length() > 0 || strc.length() > 0)) op += '+';
    
    if(strb.length() > 0) op.append(strb);
    if(strb.length() > 0 && strc.length() > 0) op += '+';

    if(strc.length() > 0) op.append(strc);

    cout << op;

    return 0;
}
