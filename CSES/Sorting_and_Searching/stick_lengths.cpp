#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007

void solve() {
    ll n;
    cin>>n;
    vector<ll> p(n);
    for(auto& e:p){
        cin>>e;
    }
    sort(p.begin(), p.end());
    ll ans = LLONG_MAX, val, temp;
    if(n%2 == 0){
        temp = 0;
        val = p[n/2];
        for(int i = 0; i < n; i++){
            temp += abs(p[i] - val);
        }
        ans = min(ans, temp);
        temp = 0;
        val = p[n/2 - 1];
        for(int i = 0; i < n; i++){
            temp += abs(p[i] - val);
        }
        ans = min(ans, temp);
    }
    else{
        temp = 0;
        val = p[n/2];
        for(int i = 0; i < n; i++){
            temp += abs(p[i] - val);
        }
        ans = min(ans, temp);
    }
    cout<<ans<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    //  cin >> t;
    // pre();
    while (t--)
        solve();

    return 0;
}
