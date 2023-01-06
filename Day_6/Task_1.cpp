/* Task_1 - Given an array arr[] of size N, check if it is sorted in non-decreasing order or not. 
   Problem Link - https://practice.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
*/

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        int flag=1;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                flag=0;
                break;
            }
        }
        if(flag) return 1;
        else return 0;
    }
};

// Time Complexity - O(n)
// Space Complexity - O(1)
