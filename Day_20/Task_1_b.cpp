/* Task_1_b - Nick is interested in prime numbers. Once he read about Goldbach problem. It states that every even integer greater than 2 can be expressed as the sum 
              of two primes. That got Nick's attention and he decided to invent a problem of his own and call it Noldbach problem. Since Nick is interested only in 
              prime numbers, Noldbach problem states that at least k prime numbers from 2 to n inclusively can be expressed as the sum of three integer numbers: two 
              neighboring prime numbers and 1. For example, 19 = 7 + 11 + 1, or 13 = 5 + 7 + 1.
              Two prime numbers are called neighboring if there are no other prime numbers between them.
              You are to help Nick, and find out if he is right or wrong.
   Problem Link - https://codeforces.com/contest/17/problem/A
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

bool primes[100000];

vector<int> seive(int n){
    memset(primes, 1, sizeof(primes));
    primes[0] = primes[1] = 0;
    vector<int> ans;
    for(int i = 2; i*i <= n; i++){
        if(primes[i] == 1){
            for(int j = i*i; j < n; j += i){
                primes[j] = 0;
            }
        }
    }
    for(int i = 2; i <= n; i++){
        if(primes[i])
            ans.push_back(i);
    }
    return ans;
}

void solve(){
   int n, k, cnt = 0;
   cin>>n>>k;
   vector<int> a = seive(n);
   for(int i = 0; i < a.size() - 1; i++){
    if(a[i] + a[i + 1] + 1 <= n && primes[a[i] + a[i + 1] + 1])cnt++;
   }
   if(cnt >= k)
    cout<<"YES";
   else
    cout<<"NO";  
}

int main() {
   fastio();
//    int t;
//    cin>>t;
//    while(t--){
//        solve();
//    }
   solve();
}

// Time Complexity - O(nlog(log(n)))
// Space Complexity - O(n)
