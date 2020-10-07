/*
 *
 *          YET TO BE COMPLETED
 *
 * */
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define itsShowTime main
#define mod 1000000007

void solve(){
    int n;
    cin>>n;
    vector<int> deg;
    vector<vector<int>> adj(n);
    deg.resize(n, 0);
    int cnt = 0;
    for(int i = 0; i < n-1; i++){
        int a, b;
        cin>>a>>b;
        a -= 1;
        b -= 1;
        adj[a].push_back(b);
        adj[b].push_back(a);
        deg[a] += 1;
        deg[b] += 1;
    }
    for(int i = 0; i < n; i++){
        if(deg[i] > 0){
            cnt += 1;
            for(auto e:adj[i]){
                deg[e] -= 1;
                deg[i] -= 1;
            }
        }
    }
    cout<<cnt<<"\n";
}
int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    // pre();
    while (t--){
        solve();
    }
    return 0;
}