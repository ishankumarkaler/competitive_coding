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
    string s;
    char ch;
    int count = 1, max_count = 1, n;
    cin>>s;
    ch = s[0];
    n = s.size();
    for(int i = 1; i < n; i++){
        if(s[i] == ch){
            count += 1;
        }
        else{
            ch = s[i];
            max_count = max(max_count, count);
            count = 1;
        }
    }
    max_count = max(max_count, count);
    cout<<max_count;

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
