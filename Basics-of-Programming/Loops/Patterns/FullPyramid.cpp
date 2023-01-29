#include<bits/stdc++.h>
using namespace std;
void printPyramid(){
    int rowCount = 0;
    cin>>rowCount;
    for(int row = 0; row < rowCount; ++row){
        for(int col = 0; col < rowCount * 2 - 1; ++col){
            if(col >= (rowCount - (row - 1)) && col <= (rowCount + (row - 1))){
                cout<<"*"<<" ";
            } else cout<<"  ";
        }
        cout<<endl;
    }
    return;
}
int main(){
    printPyramid();
    return 0;
}