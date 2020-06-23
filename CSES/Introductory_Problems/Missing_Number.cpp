#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007

template<typename T>
void deb(initializer_list<T> l)
{
    for (auto &e : l)
        cout << e << ' ';
    cout << endl;
}

void solve(){
    ll n, ans = 0, temp, val;
    cin>>n;
    for(int i = 0; i < n-1; i++){
        cin>>temp;
        ans += temp;
    }
    val = (n * (n+1))/2;
    cout<<val - ans;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}
