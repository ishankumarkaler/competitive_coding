#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007

// debug fn.
template<typename T>
void deb(initializer_list<T> l)
{
    for (auto &e : l)
        cout << e << ' ';
    cout << endl;
}

ll expo(ll a, ll b){
    if(b == 0)
        return 1;
    ll tmp  = expo(a, b/2);
    ll ans = ((tmp % mod) * (tmp%mod))%mod;
    if(b%2 == 1)
        return (ans*a) % mod;
    return ans%mod;
 
}
void solve(){
    ll a, b, ans = 1;
    cin>>a>>b;
    cout<<expo(a, b)<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
