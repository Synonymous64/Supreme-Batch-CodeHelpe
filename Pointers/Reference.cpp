#include<bits/stdc++.h>
using namespace std;

void printCode(){
    int a = 5;
    int &b = a;
    a++;
    b++;
    cout<<a<<endl;
    cout<<b<<endl;
}
int main(){
    printCode();
    return 0;
}