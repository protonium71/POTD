/* Task_2 - Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K.
   Problem Link - https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
*/

long maximumSumSubarray(int k, vector<int> &a , int n){
    long long curSum = 0, maxSum = -1;
    for(int i = 0, c = 0; i < n ; i++){
        if(i < k){
            curSum += a[i];
            maxSum = curSum;
        }
        else{
            curSum = curSum + a[i] - a[c++];
            maxSum = max(curSum, maxSum);
        }
    }
    return maxSum;
}

// Time Complexity - O(n)
// Space Complexity - O(1)
