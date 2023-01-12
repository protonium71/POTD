/* Task_2 - Given an array of N integers. Find the first element that occurs at least K number of times.
   Problem Link - https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times5150/1
*/

int firstElementKTime(int a[], int n, int k){
    unordered_map<int,int> m;
    int ans=-1;
    for(int i = 0; i < n; i++){
        m[a[i]]++;
        if(m[a[i]] == k){
            ans = a[i];
            break;
        }
    }
    return ans;
}

// Time Complexity - O(n)
// Space Complexity - O(n)
