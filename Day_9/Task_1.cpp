/* Task_1 - Given a non-negative integer N. The task is to check if N is a power of 2. More formally, check if N can be expressed as 2x for some x.
   Problem Link - https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1
*/

// First approach O(logn) time
bool isPowerofTwo(long long n){
  if(n==0)return 0;
  return pow(2,floor(log2(n)))==n?1:0;
}

// Second Approach O(1) time
bool isPowerofTwo(long long n){
  if(n==0)return 0;
  return !(n&(n-1));
}

// Time Complexity - O(1)
// Space Complexity - O(1)
