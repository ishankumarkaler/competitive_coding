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
vector<vector<int>> adj;
vector<int> vis;
int cnt = 0;
vector<string> s;
string cur;
void dfs(int v){
    cur += to_string(v);
    cnt += 1;
    for(auto& u:adj[v]){
        
    }
}
void solve(){
    int n, m;
    cin>>n>>m;
    adj.resize(n);
    vis.resize(n, false);
    for(int i = 0; i < m; i++){
        int a, b;
        cin>>a>>b;
        adj[a-1].push_back(b-1);
    }
    string ans, temp = "$";
    int ans_cnt = 0;
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            cur = temp;
            dfs(i);
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