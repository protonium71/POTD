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