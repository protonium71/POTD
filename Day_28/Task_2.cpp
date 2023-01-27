/* Task_2 - You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.
            Return the sum of all the unique elements of nums.
   problem Link - https://leetcode.com/problems/sum-of-unique-elements/description/
*/

int sumOfUnique(vector<int>& nums) {
    unordered_map<int, int> m;
    int sum = 0;
    for(int i = 0 ; i < nums.size(); i++){
        m[nums[i]]++;
    }
    for(auto &el : m)
        if(el.second == 1)
            sum += el.first;
    return sum;
}

// Time Complexity - O(n)
// Space Complexity - O(n)
