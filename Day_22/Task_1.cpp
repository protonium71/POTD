/* Task_1 - Given two strings s and t, determine if they are isomorphic. Two strings s and t are isomorphic if the characters in s can be replaced to get t.
            All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same 
            character, but a character may map to itself.
   Problem Link - https://leetcode.com/problems/isomorphic-strings/description/
*/

bool isIsomorphic(string s, string t) {
    unordered_map<char, char> m1, m2;
    for(int i = 0; i < s.length(); i++){
        if(m1.find(s[i]) != m1.end() && m1[s[i]] != t[i]){
            return false;
        }
        m1[s[i]] = t[i];
    }
    for(int i = 0; i < s.length(); i++){
        if(m2.find(t[i]) != m2.end() && m2[t[i]] != s[i]){
            return false;
        }
        m2[t[i]] = s[i];
    }
    return true;
}

// Time Complexity - O(n)
// Space Complexity - O(n)
