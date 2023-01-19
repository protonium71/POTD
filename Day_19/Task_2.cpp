/* Task_2 - You are given a string s. Reorder the string using the following algorithm:
            Pick the smallest character from s and append it to the result.
            Pick the smallest character from s which is greater than the last appended character to the result and append it.
            Repeat step 2 until you cannot pick more characters.
            Pick the largest character from s and append it to the result.
            Pick the largest character from s which is smaller than the last appended character to the result and append it.
            Repeat step 5 until you cannot pick more characters.
            Repeat the steps from 1 to 6 until you pick all characters from s.
            In each step, If the smallest or the largest character appears more than once you can choose any occurrence and append it to the result.
            Return the result string after sorting s with this algorithm.
   Problem Link - https://leetcode.com/problems/increasing-decreasing-string/description/
*/

string sortString(string s) {
    int sum = s.length();
    map<char, int> m;
    for(auto &el : s)m[el]++;
    s = "";
    while(sum){
        for(auto &el : m){
            if(el.second == 0)
                continue;
            else {
                s.push_back(el.first);
                el.second--;
                sum--;
            }
        }
        for(auto it = m.rbegin(); it != m.rend(); it++){
            if(it->second == 0)
                continue;
            else {
                s.push_back(it->first);
                it->second--;
                sum--;
            }              
        }  
    }
    return s;
}

// Time Complexity -  O(nlogn)
// Space Complexity - O(n)
