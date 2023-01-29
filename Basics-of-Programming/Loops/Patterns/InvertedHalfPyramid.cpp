#include<bits/stdc++.h>
using namespace std;
void printInvertedHalfPyramid(){
    cout<<"Enter the row size"<<endl;
    int rowCount = 0;
    cin>>rowCount;
    for(int row = rowCount; row > 0; --row){
        for(int col = 0; col < row; ++col) cout<<"*"<<" ";
        cout<<endl;
    }
    return;
}
int main(){
    printInvertedHalfPyramid();
    return 0;
}