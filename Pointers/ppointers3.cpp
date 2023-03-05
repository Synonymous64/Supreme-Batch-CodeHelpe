#include<bits/stdc++.h>
using namespace std;
void printCode(){
    int a = 2;
    int *p = &a;
    int **q = &p;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;
    cout<<&q<<endl;
}
int main(){
    printCode();
    return 0;
}