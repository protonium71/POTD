/* Task_2 - You are given an array of characters letters that is sorted in non-decreasing order, and a character target. There are at least two different characters in 
            letters. Return the smallest character in letters that is lexicographically greater than target. If such a character does not exist, return the first 
            character in letters.
   Problem Link - https://leetcode.com/problems/find-smallest-letter-greater-than-target/description/
*/

char nextGreatestLetter(vector<char>& v, char x) {
    int l = 0, r = v.size();
    while(l < r){
        int mid = l + (r - l)/2;
        if(v[mid] <= x)l = mid + 1 ;
        else r = mid ;
    }
    if(l != v.size())return v[l];
    else return v[0];
}

// Time Complexity - O(logn)
// Space Complexity - O(1)
