#include<bits/stdc++.h>
using namespace std;
void printHollowRectangle(){

    int rowCount = 0;
    int colCount = 0;
    cout<<"Enter the row and column size"<<endl;
    cin>>rowCount>>colCount;
    for(int row = 0; row < rowCount; ++row){
        if(row == 0 || row == rowCount - 1){
            for(int col = 0; col < 5; ++col) cout<<"* ";
        } else  {
            cout<<"* ";
            for(int col = 0; col < colCount - 2; ++col) cout<<"  ";
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    printHollowRectangle();
    return 0;
}