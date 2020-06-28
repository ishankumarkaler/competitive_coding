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
    int n, q, temp, a, b, j, val = 0;
    cin>>n>>q;
    vector<ll> v, prefix;
    for(int i = 0; i < n; i++){
        cin>>temp;
        v.push_back(temp);
        if(i > 0){
            prefix.push_back(v[i] + prefix[i-1]);
        }
        else{
            prefix.push_back(v[i]);
        }
    }
    for(int i = 0; i < q; i++){
        cin>>a>>b;
        cout<<prefix[b-1] - prefix[a-1] + v[a -1]<<endl;
    }
     
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
