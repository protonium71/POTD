/* Task_1 - Write a program to create inverted hollow triangle star pattern of size n(>2).

            *   *   *   *   *   *   * 
              *                   *
                  *           *
                      *   *
                        *
*/

#include<bits/stdc++.h>
using namespace std;
//const int N=;
int main(){
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=1;j<=(4*n)-7;j++){
            if(i==0 && j%2==1)cout<<"*";
            else if(i==0) cout<<" ";
            else if(i==n-1){
                if(j==(2*n)-3)cout<<"*";
                else cout<<" ";
            }
            else{
                if(j==(2*i) || j==(4*n)-(2*i)-6)cout<<"*";
                else cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}

// Time Complexity - O(n^2)
// Space Complexity - O(1)