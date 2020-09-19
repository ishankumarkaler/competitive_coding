#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define itsShowTime main
#define mod 1000000007

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
int n, m;
vector<vector<pair<int, int>>> g;
vector<bool> vis;
vector<ll> dis;
void add_edge(int u, int v, int d){
    g[u-1].push_back({v-1, d});
    // g[v-1].push_back({u-1, d});
};
void bfs(){
    dis[0] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 0});
    while (!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        for(auto& e:g[u]){;
            int v = e.first;
            int w = e.second;
            if(dis[v] > dis[u] + w){
                dis[v] = dis[u] + w;
                pq.push({dis[v], v});
            }
            // debug(u + 1, v + 1, w, dis);
        }
    }
}
void solve(){
    cin>>n>>m;
    g.resize(n);
    vis.resize(n, false);
    dis.resize(n, INFINITY);
    for(int i = 0; i < m; i++){
        int u, v, d;
        cin>>u>>v>>d;
        add_edge(u, v, d);
    }
    bfs();
    for(auto& e:dis){
        cout<<e<<" ";
    }
    cout<<"\n";
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