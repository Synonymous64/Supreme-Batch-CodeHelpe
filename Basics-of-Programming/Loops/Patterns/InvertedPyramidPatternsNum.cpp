#include<bits/stdc++.h>
using namespace std;
void printInvertedPyramidPattern(){
    for(int row = 5; row > 0; --row){
        for(int col = 0; col < row; ++col) cout<<col+1<<" ";
        cout<<endl;
    }
}
int main(){
    printInvertedPyramidPattern();
    return 0;
}