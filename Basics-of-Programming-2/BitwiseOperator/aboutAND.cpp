#include<bits/stdc++.h>
using namespace std;
void funct(){
    bool a = true, b = true;
    cout<<( a & b )<<endl;
    cout<<(~a)<<endl;
    cout<<(a ^ b)<<endl;
    cout<<(2 & 3)<<endl; // 10 & 11 = 10
    // 0 1
    // 1 0
    // 1 0
    // 1 1
    // 1 0
}
int main(){
    funct();
    return 0;
}