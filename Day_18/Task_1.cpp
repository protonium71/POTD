/* Task_1 - Given two arrays of integers nums and index. Your task is to create target array under the following rules:
            Initially target array is empty.
            From left to right read nums[i] and index[i], insert at index index[i] the value nums[i] in target array.
            Repeat the previous step until there are no elements to read in nums and index.
            Return the target array.
   Problem Link - https://leetcode.com/problems/create-target-array-in-the-given-order/description/
*/

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    vector<int> ans;
    for(int i = 0; i < index.size(); i++)ans.insert(ans.begin() + index[i], nums[i]);
    return ans;
}

// Time Complexity - O(n^2)
// Space Complexity - O(n)
