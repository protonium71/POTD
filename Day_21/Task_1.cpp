/* Task_1 - A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same 
            forward and backward. Alphanumeric characters include letters and numbers.
            Given a string s, return true if it is a palindrome, or false otherwise.
   Problem Link - https://leetcode.com/problems/valid-palindrome/description/
*/

bool isPalindrome(string s) {
    int n = s.length();
    int i = 0, j = n - 1;
    while(i <= j){
        if(s[i] == ' ' || (s[i] < 48) || (s[i] > 57 && s[i] < 65) || (s[i] > 90 && s[i] < 97) || (s[i] > 122)){
            i++;
            continue;
        }
        if(s[j] == ' ' || (s[j] < 48) || (s[j] > 57 && s[j] < 65) || (s[j] > 90 && s[j] < 97) || (s[j] > 122)){
            j--;
            continue;
        }
        if(tolower(s[i]) == tolower(s[j])){
            i++;
            j--;
        }
        else
            return false;
    }
    return true;
}

// Time Complexity - O(n)
// Space Complexity - O(1)
