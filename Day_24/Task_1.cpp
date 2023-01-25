/* Task_1 - Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
            You may assume that each input would have exactly one solution, and you may not use the same element twice.
            You can return the answer in any order.
   Problem Link - https://leetcode.com/problems/two-sum/description/
*/

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;
    int ans;
    for(int i = 0; i < nums.size(); i++){
        if(m.find(target - nums[i]) != m.end()){
            ans = i;
            break;
        }
        else
            m[nums[i]] = i;
    }
    return vector<int> {ans, m[target - nums[ans]]};
}

// Time Complexity - O(n)
// Space Complexity - O(n)
