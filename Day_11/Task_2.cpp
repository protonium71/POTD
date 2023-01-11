/* Task_2 - Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in 
            any order.
   Problem Link - https://leetcode.com/problems/intersection-of-two-arrays/
*/

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> s;
    vector<int> v;
    for(auto a:nums1)s.insert(a);
    for(auto a:nums2){
        if(s.find(a)!=s.end()){
            v.push_back(a);
            s.erase(a);
        }
    }
    return v;
}

// Time Complexity - O(vector.size())
// Space Complexity - O(vector.size())
