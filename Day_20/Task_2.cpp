/* Task_2 - You are given an array A of integers of size N. You will be given Q queries where each query is represented by two integers L, R. You have to find the 
            gcd(Greatest Common Divisor) of the array after excluding the part from range L to R inclusive (1 Based indexing). You are guaranteed that after excluding
            the part of the array remaining array is non empty.
   Problem Link - https://www.codechef.com/problems/GCDQ
*/

#include<bits/stdc++.h>
                       
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void solve(){
   int n, q;
   cin>>n>>q;
   vector<int> a(n), b, c;
   for(int i = 0; i < n; i++)
    cin>>a[i];
   for(int i = 0; i < n; i++){
    if(i == 0)b.push_back(a[i]);
    else b.push_back(__gcd(b[i - 1], a[i]));
   }
   for(int i = n - 1; i >= 0; i--){
    if(i == n - 1)c.push_back(a[i]);
    else c.push_back(__gcd(c.back(), a[i]));
   }
   for(int i = 0; i < q; i++){
    int l, r;
    cin>>l>>r;
    if(l == 1 && r == n){
        cout<<1<<nline;
    }
    else if(l == 1){
        cout<<c[n - r - 1]<<nline;
    }
    else if(r == n){
        cout<<b[l - 2]<<nline;
    }
    else{
        cout<<__gcd(b[l - 2], c[n - r - 1])<<nline;
    }
   }
}

int main() {
   fastio();
   int t;
   cin>>t;
   while(t--){
       solve();
   }
}

// Time Complexity - O(n)
// Space Complexity - O(n)
