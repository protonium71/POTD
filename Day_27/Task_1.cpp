/* Task_1 - You are given an integer array nums consisting of n elements, and an integer k. Find a contiguous subarray whose length is equal to k that has the maximum
            average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.
   Problem Link - https://leetcode.com/problems/maximum-average-subarray-i/description/
*/

double findMaxAverage(vector<int>& nums, int k) {
    double sum = 0, ans = INT_MIN;
    for(int i = 0, j =0; i < nums.size(); i++){
        if(i < k){
            sum += nums[i];
            if(i == k - 1)
                ans = max(sum/k, ans);
        }
        else{
            sum -= nums[j];
            sum += nums[i];
            ans = max(sum/k, ans);
            j++;
        }
    }
    return ans;
}

// Time Complexity - O(n)
// Space Complexity - O(1)
