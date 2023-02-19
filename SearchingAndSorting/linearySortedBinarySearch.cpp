#include<bits/stdc++.h>
using namespace std;
int binSearch(vector<int> &nums, int target){
    int low = 0, high = nums.size() - 1;

    while(low <= high){
        int mid = low + (high - low)/2;
        if(nums[mid] == target) return mid;
        else if( mid - 1 >= 0 && nums[mid - 1] == target) return mid - 1;
        else if(mid + 1 < nums.size() && nums[mid + 1] == target) return mid + 1;
        else if(target > nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}
int main(){
    vector<int> nums = {10, 3, 40, 20, 50, 80, 70};
    int target = 40;
    cout<<binSearch(nums, target)<<endl;
    return 0;
}