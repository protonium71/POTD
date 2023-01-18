/* Task_2 - At a lemonade stand, each lemonade costs $5. Customers are standing in a queue to buy from you and order one at a time (in the order specified by bills). 
            Each customer will only buy one lemonade and pay with either a $5, $10, or $20 bill. You must provide the correct change to each customer so that the net
            transaction is that the customer pays $5.
            Note that you do not have any change in hand at first.
            Given an integer array bills where bills[i] is the bill the ith customer pays, return true if you can provide every customer with the correct change, or 
            false otherwise.
   Problem Link - https://leetcode.com/problems/lemonade-change/description/
*/

bool lemonadeChange(vector<int>& bills) {
    int cnt5 = 0, cnt10 = 0;
    for(int i = 0; i < bills.size(); i++){
        if(bills[i] == 5)cnt5++;
        if(bills[i] == 10){
            if(cnt5 > 0){
                cnt5--;
                cnt10++;
            }
            else return false;
        }
        if(bills[i] == 20){
            if(cnt5 > 0 && cnt10 > 0){
                cnt5--, cnt10--;
            }
            else if(cnt5 > 2){
                cnt5 -= 3;
            }
            else return false;
        }
    }
    return true;
}

// Time Complexity - O(n)
// Space Complexity - O(1)
