#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define mod 1000000007
 
vector<vector<bool>> vis;
vector<int> dx{0, 0, 1, -1};
vector<int> dy{1, -1, 0, 0};
int n, m;
bool isvalid(int x, int y){
    return !(x < 0 || x >= n || y < 0 || y >= m);
 
}
void dfs(int i, int j){
    vis[i][j] = true;
    for (int k = 0; k < 4; ++k) {
        int i1 = i + dy[k];
        int j1 = j + dx[k];
        if(isvalid(i1, j1) && !vis[i1][j1])
            dfs(i1, j1);
    }
}
void solve() {
    cin>>n>>m;
    vis.resize(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char temp;
            cin>>temp;
            vis[i].push_back((temp == '#'));
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(!vis[i][j]){
                cnt++;
                dfs(i, j);
            }
        }
    }
    cout<<cnt<<"\n";
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
