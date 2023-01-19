/* Task_1 - Given a string s, return true if s is a good string, or false otherwise.
            A string s is good if all the characters that appear in s have the same number of occurrences (i.e., the same frequency).
   Problem Link - https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/description/
*/

bool areOccurrencesEqual(string s) {
    unordered_map<char, int> m;
    for(auto &el : s)m[el]++;
    for(auto it1 = m.begin(); it1 != m.end(); it1++){
        if(it1->second != m.begin()->second)return false;
    }
    return true;
}

// Time Complexity - O(n)
//Space Complexity - O(n)
