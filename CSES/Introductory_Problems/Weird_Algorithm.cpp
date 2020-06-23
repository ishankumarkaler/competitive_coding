#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mod 1000000007

// debug function
template<typename T>
void deb(initializer_list<T> l)
{
    for (auto &e : l)
        cout << e << ' ';
    cout << endl;
}

void solve(){
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n != 1){
        if(n%2 == 0){
            n = n/2;
        }
        else{
            n = n*3 + 1;
        }
        cout<<n<<" ";
    }
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
