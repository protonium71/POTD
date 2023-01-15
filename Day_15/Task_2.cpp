/* Task_2 - Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
            You must not use any built-in exponent function or operator.
   Problem Link - https://leetcode.com/problems/sqrtx/description/
*/

int mySqrt(int x) {
    long long l = 1, r = 1<<16;
    while(l <= r){
        long long mid = l + (r - l)/2;
        if(mid*mid == x)return mid;
        if(mid*mid > x)r = mid - 1;
        else l = mid + 1;
    }
    return l - 1;
}

// Time Complexity - O(logn)
// Space Complexity - O(1)
