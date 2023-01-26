/* Task_2 - You are given a 0-indexed string blocks of length n, where blocks[i] is either 'W' or 'B', representing the color of the ith block. The characters 'W' and 'B'
            denote the colors white and black, respectively.
            You are also given an integer k, which is the desired number of consecutive black blocks.
            In one operation, you can recolor a white block such that it becomes a black block.
            Return the minimum number of operations needed such that there is at least one occurrence of k consecutive black blocks.
   Problem Link - https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/description/
*/

int minimumRecolors(string blocks, int k) {
    int cost = 0, ans = INT_MAX;
    for(int i = 0, j = 0; i < blocks.length(); i++){
        if(i < k){
            if(blocks[i] == 'W')
                cost++;
            if(i == k - 1)
                ans = min(ans, cost);
        }
        else{
            if(blocks[i] == 'B' && blocks[j] == 'W')
                cost--;
            else if(blocks[i] == 'W' && blocks[j] == 'B')
                cost++;
            ans = min(ans, cost);
            j++;
        }
    }
    return ans;
}

// Time Complexity - O(n)
// Space Complexity - O(1)
