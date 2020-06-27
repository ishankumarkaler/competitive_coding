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
    int n, x, temp;
    vector<int> a;
    cin>>n>>x;
    map<int, vector<int>> hash;
    for(int i = 0; i < n; i++){
        cin>>temp;
        a.push_back(temp);
        hash[temp].push_back(i+1);
    }
    sort(a.begin(), a.end());
    int l = 0, r = n-1;
    if(n == 1){
        if(x == a[0]){
            cout<<"1";
            exit(0);
        }
    }
    while(l < r){
        int val = a[l] + a[r];
        if(val == x){
            int a1= hash[a[l]].back();
            hash[a[l]].pop_back();
            int a2 = hash[a[r]].back();
            hash[a[r]].pop_back();
            cout<<a1<<" "<<a2;
            exit(0);
        }
        else if(val < x){
            l += 1;
        }
        else{
            r -= 1;
        }
    }
    cout<<"IMPOSSIBLE";
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
