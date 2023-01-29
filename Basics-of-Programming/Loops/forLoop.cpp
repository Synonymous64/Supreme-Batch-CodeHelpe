#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i = 0; i < 5; ++i) cout<<"Love Babbar"<<endl;
    for(int i = 0; i < 5; ++i) cout<<i<<" ";
    cout<<endl;
    for(int i = 5; i > 0; --i) cout<<i<<" ";
    cout<<endl;
    for(int i = 0; i <= 5; i+=2) cout<<i<<" ";
    cout<<endl;
    for(int i = 1; i < 10; i *= 2) cout<<i<<" ";
    cout<<endl;
    for(int i = 100; i > 0; i /= 2) cout<<i<<" ";
    cout<<endl;
    int i = 0;
    for(; i < 5; ++i) cout<<i<<" ";
    cout<<endl;

    int j = 0;
    for(; ;){
        if(j < 5){
            cout<<j<<" ";
        }
        j++;
    }

    // int n = 0;
    // if(cin>>n){
    //     cout<<"Prajwal"<<endl;
    //     cout<<n<<" ";
    // }

    // int t = 3;
    // if(cout<<t){
    //     cout<<3<<endl;
    // }
    return 0;
}