/* Task_1 - The k-beauty of an integer num is defined as the number of substrings of num when it is read as a string that meet the following conditions:
            It has a length of k. 
            It is a divisor of num. 
            Given integers num and k, return the k-beauty of num.
   Problem Link - https://leetcode.com/problems/find-the-k-beauty-of-a-number/description/
*/

int divisorSubstrings(int num, int k) {
    string s = to_string(num);
    int cnt = 0;
    for(int i = 0; i <= s.length() - k; i++){
      int x =  stoi(s.substr(i,k)); 
      if(x == 0)
            continue;
      if(num%x == 0)
            cnt++;
    }
    return cnt;
}

// Time Complexity - O(k*logn)
// Space Complexity - O(logn)
