#include<bits/stdc++.h>
using namespace std;
double squareRoot(int x){
    int low = 0, high = x, res = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(mid <= x/mid){
            low = mid + 1;
            res = mid;
        } else high = mid - 1;
    }
    return res;
}
int main(){
    int n = 10;
    int ans = squareRoot(n);
    double res = ans;
    double step = 0.1;
    cout<<"Enter your precision"<<endl;
    int precision;
    cin>>precision;
    for(int i = 0; i < precision; ++i){
        for(double j = res; j * j <= n; j+=step){
            res = j;
        }
        step /= 10;
    }
    cout<<res<<endl;
    return 0;
}