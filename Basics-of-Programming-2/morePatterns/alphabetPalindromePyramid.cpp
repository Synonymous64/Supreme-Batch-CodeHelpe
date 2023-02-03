#include <bits/stdc++.h>
using namespace std;
void printCode(){
    int n = 0;
    cin >> n;

    for (int row = 0; row < n; ++row){
        int col = 0;
        for (col = 0; col < row + 1; ++col){
            char ch = col + 'A';
            cout<<ch<<" ";
        }
        col--;
        for(; col >= 1; --col){
            char ch = col + 'A' - 1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    printCode();
    return 0;
}