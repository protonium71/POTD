/* Task_2 - You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
            You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. 
            DO NOT allocate another 2D matrix and do the rotation. 
            
   Problem Link - https://leetcode.com/problems/rotate-image/
*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++) {
                int tmp=matrix[j][i];
                matrix[j][i]=matrix[i][j];
                matrix[i][j]=tmp;
            }
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<n/2;j++) {
                int tmp=matrix[i][j];
                matrix[i][j]=matrix[i][n-j-1];
                matrix[i][n-j-1]=tmp;
            }
        }
    }
};

// Time Complexity - O(n^2)
// Space Complexity - O(1)
