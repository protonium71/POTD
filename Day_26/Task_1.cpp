/* Task_1 - A string is good if there are no repeated characters. Given a string s​​​​​, return the number of good substrings of length three in s​​​​​​.
            Note that if there are multiple occurrences of the same substring, every occurrence should be counted.
            A substring is a contiguous sequence of characters in a string.
   Problem Link - https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/description/
   
*/

int countGoodSubstrings(string s) {
    if(s.length() < 3)
        return 0;
    else{
        int cnt = 0;
        for(int i = 0; i < s.length() - 2; i++){
            if(s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2]){
                cnt++;
            }
        }
        return cnt;
    }
}

// Time Complexity - O(n)
// Space Complexity - O(1)
