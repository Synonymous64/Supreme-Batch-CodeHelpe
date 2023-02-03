#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
void printInvertedFullPyramid(){
    int n;
    cin>>n;
    for(int row = 0; row < n; ++row){
        for(int col = 0; col < n - row - 1; ++col) cout<<" ";
        for(int col = 0; col < 2 * row + 1; ++col){
            if(col == 0 || col == 2 *row) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    for(int row = n - 1; row  >= 0; --row){
        for(int col = 0; col < n - row - 1; ++col) cout<<" ";
        for(int col = 0; col < 2 * row + 1; ++col) {
            if(col == 0 || col == 2 * row) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    printInvertedFullPyramid();
    return 0;
}
