/* Task_2 - Given an array in such a way that the elements stored in array are in increasing order initially and then after reaching to a peak element, the elements 
            stored are in decreasing order. Find the highest element.
            Note: A[i] != A[i+1]
   Problem Link - https://practice.geeksforgeeks.org/problems/find-the-highest-number2259/1
*/

int findPeakElement(vector<int>& a){
    int l = 0, r = a.size()-1;
    while(l <= r){
        int mid = l + (r - l)/2;
        if(a[mid] > a[mid - 1] && a[mid] > a[mid+1])return a[mid];
        if(a[mid] <= a[mid + 1])l = mid + 1;
        else if(a[mid] <= a[mid - 1])r = mid - 1;
    }
}

// Time Complexity - O(logn) 
// Space Complexity - O(1)
