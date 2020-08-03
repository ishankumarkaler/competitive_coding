#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define mod 1000000007

vector<vector<int>> adj;
vector<bool> vis;
 
void dfs(int v){
    vis[v] = true;
    for(auto& u:adj[v]){
        if(!vis[u])
            dfs(u);
    }
}
 
void solve() {
    int n, m;
    cin>>n>>m;
    adj.clear();
    adj.resize(n);
    vis.resize(n);
    vis.assign(n, false);
    for(int i = 0; i < m; i++){
        int a, b;
        cin>>a>>b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }
    vector<int> ans;
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            ans.push_back(i+1);
            dfs(i);
        }
    }
    if(ans.size() < 2){
        cout<<"0\n";
        return;
    }
    int val = ans[0];
    cout<<ans.size()-1<<"\n";
    for (int j = 1; j < ans.size(); ++j) {
        cout<<val<<" "<<ans[j]<<"\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    // pre();
    while (t--)
        solve();
 
    return 0;
}
