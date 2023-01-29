#include<bits/stdc++.h>
using namespace std;
void printHalfPyramid(){
    int rowCount = 0;
    cout<<"Enter the size of row"<<endl;
    cin>>rowCount;
    for(int row = 1; row <= rowCount; ++row){
        for(int col = 1; col < row + 1; ++col) cout<<col<<" ";
        cout<<endl;
    }
    return;
}
int main(){
    printHalfPyramid();
    return 0;
}