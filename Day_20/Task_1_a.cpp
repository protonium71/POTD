/* Task_1_a - Given an integer n, return the number of prime numbers that are strictly less than n.
   Problem Link - https://leetcode.com/problems/count-primes/description/
*/

bool primes[5000001];

class Solution {
public:
    int countPrimes(int n) {
        memset(primes, true, sizeof(primes));
        primes[0] = primes[1] = 0;
        for(int i = 2; i*i <= n; i++){
            if(primes[i] == 1){
                for(int j = i*i; j < n; j += i){
                    primes[j] = 0;
                }
            }
        }
        int ans = accumulate(primes, primes + n, 0);
        return ans;
    }
};

// Time Complexity - O(n*log(log(n)))
// Space Complexity - O(n)
