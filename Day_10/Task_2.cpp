/* Task_2 - Given a String S, reverse the string without reversing its individual words. Words are separated by dots.
   Problem Link - https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1
*/

string reverseWords(string s){ 
    string ans="";
    s.push_back('.');
    int n=s.length();
    vector<int> v;
    v.push_back(-1);
    for(int i=0;i<n;i++)if(s[i]=='.')v.push_back(i);
    for(int i=v.size()-2;i>=0;i--){
        int x=v[i];
        while(x++<v[i+1]){
            ans.push_back(s[x]);
        }
    }
    ans.pop_back();
    return ans;
} 

// Time Complexity - O(|S|)
// Space Complexity - O(|S|)
