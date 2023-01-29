#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks = 0;
    cout<<"Enter your marks"<<endl;
    cin>>marks;

    if(marks >= 90) cout<<"GRADE 'A'"<<endl;
    else if(marks >= 80) cout<<"GRADE 'B'"<<endl;
    else if(marks >= 60) cout<<"GRADE 'C'"<<endl;
    else if(marks >= 40) cout<<"GRADE 'D'"<<endl;
    else cout<<"GRADE 'E'"<<endl;
    return 0;
}