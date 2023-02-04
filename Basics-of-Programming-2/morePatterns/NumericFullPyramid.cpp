#include<bits/stdc++.h>
using namespace std;
void printCode(){
    int n;
    cin>>n;
    for(int row = 0; row < n + 1; ++row){
        for(int col = 0; col < 2 * n - 1; ++col){
            if(col >=( n - row ) && col <= (n + (row - 2))){
                cout<<col<<" ";
            } else cout<<"  ";
        }
        cout<<endl;
    }
    
}
int main(){
    printCode();
    return 0;
}