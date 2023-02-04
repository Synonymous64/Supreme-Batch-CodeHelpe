#include<bits/stdc++.h>
using namespace std;
void funct(){
    int a = 5;
    //* left means multiple
    cout<<(a << 3)<<endl; // 5 * 2 = 10 , 10 * 2 = 20, 20 * 2 = 40
    //& cout<<(a << -1)<<endl; // not applicable

    int b = 40;
    //* right means divide
    cout<<(b >> 3)<<endl; // 40 / 2 = 20, 20 / 2 = 10, 10 / 2 = 5;
}
int main(){
    funct();
    return 0;
}