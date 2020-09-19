#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define itsShowTime main
#define mod 1000000007

int n, m, q;
vector<vector<pair<ll, ll>>> g;
vector<ll> dis;
void bfs(int src, int des){
    dis[src] = 0;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, src});
    while (!pq.empty()){
        auto front = pq.top();
        int u = front.second;
        pq.pop();

        if(front.first > dis[u]){
            continue;
        }
        for(auto e:g[u]){;
            ll v = e.first;
            ll w = e.second;
            if(dis[v] > dis[u] + w){
                dis[v] = dis[u] + w;
                pq.push({dis[v], v});
            }
        }
    }
}
void solve(){
    cin>>n>>m>>q;
    g.resize(n);
    dis.resize(n);
    for(int i = 0; i < m; i++){
        ll u, v, d;
        cin>>u>>v>>d;
        g[u-1].push_back({v-1, d});
        g[v-1].push_back({u-1, d});
    }
    for(int i = 0; i < q; i++){
        dis.assign(n, LONG_LONG_MAX);
        int src, des;
        cin>>src>>des;
        bfs(src-1, des-1);
        if(dis[des-1] == LONG_LONG_MAX){
            cout<<"-1\n";
        }
        else{
            cout<<dis[des-1]<<"\n";
        }
    }
}
int itsShowTime()
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