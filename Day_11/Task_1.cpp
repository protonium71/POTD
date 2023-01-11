/* Task_1 - Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.
   Problem Link - https://leetcode.com/problems/duplicate-zeros/description/
*/

void duplicateZeros(vector<int>& a) {
    vector<int> v;
    int n=a.size();
    for(int i=0;i<n;i++){
        if(v.size()==a.size())break;
        if(a[i]==0)v.push_back(0),v.push_back(0);
        else v.push_back(a[i]);
    }
    for(int i=0;i<n;i++)a[i]=v[i];
}

// Time Complexity - O(n)
// Space Complexity - O(n)
