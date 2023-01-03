// Task_1 - Given an integer numRows, return the first numRows of Pascal's triangle.
// Problem Link - https://leetcode.com/problems/pascals-triangle/description/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
        int i,j;
        v[0].push_back(1);
        if(numRows==1)return v;
        for(i=1;i<numRows;i++){
            for(j=0;j<=i;j++){
                if(j==0 || j==i)v[i].push_back(1);
                else v[i].push_back(v[i-1][j]+v[i-1][j-1]);
            }
        }
        return v;
    }
};

// Time Complexity - O(n^2)
// Space Complexity -O(1)
