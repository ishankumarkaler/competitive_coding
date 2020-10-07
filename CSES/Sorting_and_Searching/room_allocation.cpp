#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007

struct myComp {
    constexpr bool operator()(
            pair<int, int> const& a,
            pair<int, int> const& b)
    const noexcept
    {
        if(a.first == b.first){
            return a.second > b.second;
        }
        return a.first > b.first;
    }
};
bool cmp(const tuple<int, int, int> a, const tuple<int, int, int> b){
    int a1, a2, a3, b1, b2, b3;
    tie(a1, a2, a3) = a;
    tie(b1, b2, b3) = b;
    if(a1 == b1){
        return a2 < b2;
    }
    return a1 < b1;
}
void solve() {
    int n;
    cin>>n;
    int a, b;
    priority_queue <pair<int, int>, vector<pair<int, int>>, myComp> pq;
    vector<tuple<int, int, int>> ar;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        ar.push_back({a, b, i});
    }
    sort(ar.begin(), ar.end(), cmp);
    vector<int> ans(n);
    int cur_max = 0;
    for(int i = 0; i < n; i++){
        int a1, b1, idx;
        tie(a1, b1, idx) = ar[i];
        if((int)pq.size() == 0){
            pq.push({b1, 1});
            ans[idx] = 1;
            cur_max = max(cur_max, 1);
            continue;
        }
        int top_min = pq.top().first, room = pq.top().second;
        if(top_min < a1){
            ans[idx] = room;
            pq.pop();
            cur_max = max(cur_max, room);
            pq.push({b1, room});
        }
        else{
            cur_max += 1;
            ans[idx] = cur_max;
            pq.push({b1, cur_max});
        }
    }
    cout << cur_max << "\n";
    for(int e:ans){
        cout << e << " ";
    }
    cout << "\n";
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