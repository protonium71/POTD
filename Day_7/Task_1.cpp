/* Task_1 - Given an array arr[] sorted in ascending order of size N and an integer K. Check if K is present in the array or not.
   Problem Link - https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=who-will-win
*/
  
int searchInSorted(int a[], int n, int k){ 
      int l=0,r=n-1;
      while(l<=r){
          int mid=l+(r-l)/2;
          if(a[mid]==k)return 1;
          if(a[mid]>k)r=mid-1;
          else l=mid+1;
      }
      return -1;
}

// Time Complexity - O(logn)
// Space Complexity - O(1)
