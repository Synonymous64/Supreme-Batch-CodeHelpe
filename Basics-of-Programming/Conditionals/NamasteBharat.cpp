#include<bits/stdc++.h>
using namespace std;

//! least memory that is addressble is one byte that is boolean datatype size!
//! negative number is stored in the form of 2's complement!
int main(){

    //* Type Casting

    double d = 5.3;
    cout<<"The typecasted double to int with explicitly and later added with 2"<<((int)d+2)<<endl;

    //* Sizeof operator 
    long s = 5;
    cout<<"size of the following variable "<<sizeof(s)<<endl;

    long long s2 = 5;
    cout<<"size of the following variable "<<sizeof(s2)<<endl;

    bool s3 = 1;
    cout<<"size of the following variable "<<sizeof(s3)<<endl;

    //* integer data type
    float b = 4;
    cout<<"The value of b is: "<<b<<endl;

    //* integer data type
    int a = 5;
    cout<<"The value of a is: "<<a<<endl;

    //* character data type
    char ch = 'a';
    cout<<"The value of ch is: "<<ch<<endl;

    //* boolean data type
    bool flag = true;
    cout<<std::boolalpha<<"The value of flag is "<<flag<<endl;

    //* Print statement
    cout<<"Namaste, Bharat!"<<endl;
    cout<<'2'<<endl;

    //* Read statement
    cout<<"Enter a number"<<endl;
    int num = 0;
    cin>>num;
    cout<<"The number that was entered is: "<<num<<endl;
    return 0;
}