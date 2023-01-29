#include<bits/stdc++.h>
using namespace std;
void printRectPattern(){
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 5; ++j){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
int main(){
    printRectPattern();
    return 0;
}