/* Task_1 - We are playing the Guess Game. The game is as follows:
            I pick a number from 1 to n. You have to guess which number I picked.
            Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.
            You call a pre-defined API int guess(int num), which returns three possible results:
           -1: Your guess is higher than the number I picked (i.e. num > pick).
            1: Your guess is lower than the number I picked (i.e. num < pick).
            0: your guess is equal to the number I picked (i.e. num == pick).
            Return the number that I picked.
*/

int guessNumber(int n) {
    long long l = 0, r = n, ans;
    while(l <= r){
        long long mid = l + (r - l)/2;
        if(guess(mid) == 0)ans = mid;
        if(guess(mid) == -1)r = mid - 1;
        else l = mid + 1;
    }
    return ans;
}

// Time Complexity - O(logn)
// Space Complexity - O(1)
