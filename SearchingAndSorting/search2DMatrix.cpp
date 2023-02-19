#include<bits/stdc++.h>
using namespace std;
void search2D(int arr[][4], int rows, int cols, int target){
    int low = 0, high = rows * cols - 1;
    while(low <= high){
        int mid = low + (high - low)/2;
        int row = mid / cols;
        int col = mid % cols;
        if(arr[row][col] == target) {cout<<"row:"<<row<<"col:"<<col; break;}
        else if(arr[row][col] < target) low = mid + 1;
        else high = mid - 1;
    }
    if(low > high) cout<<"not found"<<endl;
}
int main(){
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int rows = 3, cols = 4;
    search2D(arr, rows, cols, 4);
    cout<<endl;
    return 0;
}