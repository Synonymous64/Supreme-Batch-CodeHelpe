#include<bits/stdc++.h>
using namespace std;
void funct(){
    int a = 6;
    int c = a++ + 1;
    cout<<c<<endl;
    int d = 5;
    // d = 6 d = 7
    cout<<++d * ++d<<endl;
}
int main(){
    funct();
    return 0;
}