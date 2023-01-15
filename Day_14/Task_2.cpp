/* Task_2 - Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it
            were inserted in order.
   Problem Link - https://leetcode.com/problems/search-insert-position/
*/

int searchInsert(vector<int>& nums, int target) {
    int l=0,r=nums.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(nums[mid]==target)return mid;
        if(nums[mid]<target)l=mid+1;
        else r=mid-1;
    }
    return l;
}

// Time Complexity - O(logn)
// Space Complexity - O(1)
