#include<bits/stdc++.h>
using namespace std;

void printCode(int **p){
    **p =  **p + 1;
}
int main(){
    int a = 5;
    int *p = &a;
    int **q = &p;

    cout<<"BEFORE: "<<endl;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;

    printCode(q);

    cout<<"AFTER: "<<endl;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    return 0;
}