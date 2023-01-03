// Task_1 - Understand the concept of loops and try to create a pyramid of * pattern of size n (user input).

#include<bits/stdc++.h>
using namespace std;
//const int N=;
int main(){
    int n,i,j;
    cin>>n;
    cout<<"YOUR PATTERN FOR N="<<n<<" IS :-\n";
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++)cout<<" ";
        for(j=0;j<i+1;j++)cout<<"* ";
        cout<<endl;
    }
    return 0;
}

// Time Complexity - O(n^2)
// Space Complexity - O(1)
