/* Task_1 - You are given a string array words and a string s, where words[i] and s comprise only of lowercase English letters.
            Return the number of strings in words that are a prefix of s.
   Problem Link - https://leetcode.com/problems/count-prefixes-of-a-given-string/description/
*/

int countPrefixes(vector<string>& words, string s) {
    int cnt = 0;
    for(auto ele : words)if(s.find(ele) < 1)cnt++;
    return cnt;
}

// Time Complexity - O(words.size()) for smaller strings and O(words.size()*words[i].size()*s.size()) for larger strings
// Space Complexity - O(1)
