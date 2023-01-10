/* Task_1 - Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array(In Place). In other words, arrange the elements into a sequence 
            such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....
            If there are multiple solutions, find the lexicographically smallest one.
   Problem Link - https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1
*/

void convertToWave(int n, vector<int>& a){
  for(int i=0;i<n-1;i+=2)swap(a[i],a[i+1]);
}

// Time Complexity - O(n)
// Space Complexity - O(1)
