#include <bits/stdc++.h>
using namespace std;
void printCode(){
    int n = 0;
    cin >> n;

    for (int row = 0; row < n; ++row){
        for (int col = 0; col < row + 1; ++col){
            cout << row + 1;
            if (col != row)
                cout << "*";
        }
        cout << endl;
    }
    for (int row = n - 1; row >= 0; --row){
        for (int col = 0; col < row + 1; ++col){
            cout << row + 1;
            if (col != row)
                cout << "*";
        }
        cout << endl;
    }
}
int main(){
    printCode();
    return 0;
}