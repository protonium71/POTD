/* Task_2 - Your task is to calculate sum  of primes present as digits of given number N.
   Problem Link - https://practice.geeksforgeeks.org/problems/sum-of-primes0042/1
*/

int primeSum(int n){
    unordered_set<int> s={2,3,5,7};
    int sum=0;
    while(n){
        if(s.find(n%10)!=s.end())sum+=n%10;
        n/=10;
    }
    return sum;
}

// Time Complexity - O(logn)
// Space Complexity - O(1)
