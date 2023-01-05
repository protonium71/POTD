// Task_2 - You are given an integer N. You need to convert all zeroes of N to 5.
// Problem Link - https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1

int convertFive(int num) {
    // code here
    int cnt=0,n=num;
    while(n!=0){
        if(n%10==0){
            num+=5*pow(10,cnt);
        }
        n/=10;
        cnt++;
    }
    return num;
}

// Time Complexity - O(logn)
// Space Complexity - O(1)
