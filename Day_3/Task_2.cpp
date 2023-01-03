/* Task_2 - Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the
            order red, white, and blue.
            We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
            You must solve this problem without using the library's sort function.
   
   Problem Link - https://leetcode.com/problems/sort-colors/description/
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,cnt0=0,cnt1=0,cnt2=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]==0)cnt0++;
            else if(nums[i]==1)cnt1++;
            else cnt2++;
        }
        for(i=0;i<nums.size();i++){
            if(i<cnt0)nums[i]=0;
            else if(i<cnt0+cnt1)nums[i]=1;
            else nums[i]=2;
        }
    }
};

// Time Complexity - O(n)
// Space Complexity - O(1)
