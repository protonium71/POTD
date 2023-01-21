/* Task_2 - Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
   Problem Link - https://leetcode.com/problems/counting-bits/description/
*/
vector<int> countBits(int n) {
    vector<int> ans;
    ans.push_back(0);
    for(int i = 1; i<= n; i++){
        if(i%2 == 0){
            ans.push_back(ans[i/2]);
        }
        else
            ans.push_back(ans[i/2] + 1);
    }
    return ans;
}

// Time Complexity - O(n)
// Space Complexity - O(n)
