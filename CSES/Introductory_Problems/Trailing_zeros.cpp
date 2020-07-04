#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define mod 1000000007
 
void solve(){
    ll n, i = 1, count = 0;
    cin>>n;
    ll temp = -1, f = 5;
    while(temp != 0){
        temp = n/f;
        count += temp;
        f *= 5;
    }
    cout<<count;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
 
}
