/* Task_2 - Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
   Problem Link - https://leetcode.com/problems/contains-duplicate/description/
*/

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> s;
    for(int i = 0; i < nums.size(); i++){
        s.insert(nums[i]);
        if(s.size() != i + 1)
        return true;
    }
    return false;
}

// Time Complexity - O(n)
// Space Complexity - O(n)
