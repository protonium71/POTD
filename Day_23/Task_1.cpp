/* Task_1 - Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0.
   Problem Link - https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1?category[]=Hash&category[]=Hash&company[]=Amazon&company[]=Amazon&page=1&query=category[]Hashcompany[]Amazonpage1company[]Amazoncategory[]Hash&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-subarray-with-0-sum
*/

int maxLen(vector<int>&a, int n){
    int sum = 0;
    vector<int> v;
    for(int i = 0; i < n; i ++){
        sum += a[i];
        v.push_back(sum);
    }
    map<int,int>mp;
    int ans=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) ans=max(ans,i+1);
        if(mp.find(v[i])!=mp.end()){
          ans=max(ans,i-mp[v[i]]);
        }
        else
          mp[v[i]]=i;
    }
    return ans;
}

// Time Complexity - O(n)
// Space Complexity - O(n)
