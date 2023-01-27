/* Task_2 - Given a string s, reverse only all the vowels in the string and return it. The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and
            upper cases, more than once.
   Problem Link - https://leetcode.com/problems/reverse-vowels-of-a-string/description/
*/

string reverseVowels(string s) {
    int i = 0, j =s.length() - 1;
    unordered_set<char> ss = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    while(i < j){
        if(ss.find(s[i]) != ss.end() && ss.find(s[j]) != ss.end()){
            swap(s[i],s[j]);
            i++, j--;
        }
        if(ss.find(s[i]) == ss.end())
            i++;
        if(ss.find(s[j]) == ss.end())
            j--;
    }
    return s;
}

// Time Complexity - O(n)
// Space Complexity - O(1)
