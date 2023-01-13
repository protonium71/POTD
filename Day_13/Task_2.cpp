/* Task_2 - It is a sweltering summer day, and a boy wants to buy some ice cream bars. At the store, there are n ice cream bars. You are given an array costs of length n,
            where costs[i] is the price of the ith ice cream bar in coins. The boy initially has coins coins to spend, and he wants to buy as many ice cream bars as 
            possible. 
            Note: The boy can buy the ice cream bars in any order.
            Return the maximum number of ice cream bars the boy can buy with coins coins.
   Problem Link - https://leetcode.com/problems/maximum-ice-cream-bars/description/
*/

int maxIceCream(vector<int>& costs, int coins) {
    sort(costs.begin(),costs.end());
    int cnt = 0;
    for(auto el : costs){
        if(el <= coins)coins -= el,cnt++;
        else break;
    }
    return cnt;
}

// Time Complexity - O(nlogn)
// Space Complexity - O(1)
