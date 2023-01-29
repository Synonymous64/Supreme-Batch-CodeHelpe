#include<bits/stdc++.h>
using namespace std;
void printInvertedPyramid(){
    int rowCount = 0;
    cin>>rowCount;
    for(int row = rowCount; row >= 0; --row){
        for(int col = 0; col <= 2 * rowCount - 1; ++col){
            if(col >= (rowCount - (row - 1)) && col <= (rowCount + (row - 1))){
                cout<<"*"<<" ";
            } else cout<<"  ";
        }
        cout<<endl;
    }
}
int main(){
    printInvertedPyramid();
    return 0;
}