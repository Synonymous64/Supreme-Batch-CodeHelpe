#include<bits/stdc++.h>
using namespace std;
void printSquare(){

    int n = 0;
    cout<<"Enter the size of the square"<<endl;
    cin>>n;
    for(int row = 0; row < n; ++row){
        for(int col = 0; col < n; ++col){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return;
}
int main(){
    printSquare();
    return 0;
}