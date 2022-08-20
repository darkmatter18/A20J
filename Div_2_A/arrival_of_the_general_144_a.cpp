#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[]){
    int n;
    int lowest = 1000;
    int highest = 0;
    int lowest_idx = 0;
    int highest_idx = 0;

    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        num[i] = x;
        if(x <= lowest){
            lowest = x;
            lowest_idx = i;
        }
        if(x > highest){
            highest = x;
            highest_idx = i;
        }
    }

    // cout << lowest << " " << lowest_idx << " " << highest << " " << highest_idx;

    if (highest_idx < lowest_idx){
        int highest_m = highest_idx;
        int lowest_m = n - 1 - lowest_idx;
        int total = highest_m + lowest_m;
        cout << total;
    } else {
        int lowest_m = n - 1 - lowest_idx;
        int highest_m = highest_idx;
        int total = highest_m + lowest_m - 1;
        cout << total;
    }
    return 0;
}
