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

void solve(){
    ll n, temp, sum = 0;
    vector<ll> v;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>temp;
        v.push_back(temp);
    }
    int j = 1;
    ll global_sum = v[0], local_sum = v[0];
    while(j < n){
        local_sum = max(v[j], local_sum + v[j]);
        global_sum = max(global_sum, local_sum);
        j += 1;
    }
    cout<<global_sum;
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
