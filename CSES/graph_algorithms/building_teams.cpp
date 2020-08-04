#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007

int n, m;
vector<vector<int>> adj;
vector<int> cl;        // color the team 1, 2; 0 means no team assigned
bool state = false;
void bfs(int v){
    if(cl[v]){
        return;
    }
    cl[v] = 1;
    queue<int> q;
    q.push(v);
    while (!q.empty()){
        int s = q.front();
        q.pop();
        for(auto& u:adj[s]){
            if(cl[u]){
                if(cl[u] == cl[s]){
                    state = true;
                    return;
                }
                else{
                    continue;
                }
            }
            else{
                if(cl[s] == 1){
                    cl[u] = 2;
                }
                else{
                    cl[u] = 1;
                }
                q.push(u);
            }
        }
    }
}
void solve() {
    cin>>n>>m;
    adj.resize(n);
    cl.resize(n);
    cl.assign(n, 0);
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin>>a>>b;
        a -= 1;
        b -= 1;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int j = 0; j < n; ++j) {
        bfs(j);
        if(state){
            cout<<"IMPOSSIBLE\n";
            return;
        }
    }
    for(auto& e:cl){
        cout<<e<<" ";
    }
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
