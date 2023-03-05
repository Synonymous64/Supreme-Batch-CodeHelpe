#include<bits/stdc++.h>
using namespace std;

int *printCode(){
    int res = 5;
    int *p = &res;
    return p;
}
int main(){
    cout<<printCode()<<endl;
    return 0;
}