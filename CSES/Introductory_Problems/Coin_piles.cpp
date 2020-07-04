#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define mod 1000000007
 
void solve(){
    ll a1, b1, a, b;
    cin>>a1>>b1;
    if(a1 > b1){
        b = a1;
        a = b1;
    }
    else{
        a = a1;
        b = b1;
    }
    ll val = 2*b - a;
    if(val%3 == 0){
        val /= 3;
        val = a - val;
        if(val >= 0 && val%2 == 0){
            cout<<"YES\n";
            return;
        }
        else{
            cout<<"NO\n";
            return;
        }
    }
    cout<<"NO\n";
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin>>t;
    while(t--)
        solve();
}
