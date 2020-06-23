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
    int n, count = 0, temp, val;
    vector<int> v;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    val = -1;
    for(int i = 0; i < n; i++){
        if(v[i] != val){
            count += 1;
            val = v[i];
        }
    }
    cout<<count;

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
