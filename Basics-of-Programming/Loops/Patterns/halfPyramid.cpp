#include<bits/stdc++.h>
using namespace std;
void printHalfPyramid(){
    int rowCount = 0;
    cout<<"Enter the row"<<endl;
    cin>>rowCount;
    for(int row = 0; row < rowCount; ++row){
        for(int col = 0; col < row + 1; ++col){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return;
}
int main(){
    printHalfPyramid();
    return 0;
}