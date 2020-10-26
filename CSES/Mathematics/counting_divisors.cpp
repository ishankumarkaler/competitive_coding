#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define mod 1000000007

vector<int> smallest_prime_factor;
void factorize(){
    int N_MAX = 1e6;
    // debug(N_MAX);
    smallest_prime_factor.reserve(N_MAX + 5);
    smallest_prime_factor[1] = 1;
    vector<bool> counted;
    counted.resize(N_MAX + 5, false);
    for(ll i = 2; i <= N_MAX; i += 2){
        assert(i > 0 && i <= N_MAX);
        smallest_prime_factor[i] = 2;
    }
    for(ll i = 3; i <= N_MAX; i += 2){
        if(!counted[i]){
            assert(i > 0 && i <= N_MAX);
            smallest_prime_factor[i] = i;
            for(ll j = i; j*i <= N_MAX; j += 2){
                assert(j*i > 0 || j*i <= N_MAX);
                if(!counted[i * j]){
                    counted[i*j] = true;
                    smallest_prime_factor[i*j] = i;
                }
            }
        }
    }
}
void solve(){
    int x;
    cin >> x;
    int cur = smallest_prime_factor[x];
    int cnt = 1;
    ll ans = 1;
    // debug(cur);
    while (x > 1){
        x /= cur;
        if(cur == smallest_prime_factor[x]){
            cnt += 1;
            continue;
        }
        ans *= (cnt + 1);
        cur = smallest_prime_factor[x];
        cnt = 1;
    }
    cout << ans << "\n";
}
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    factorize();
    int t = 1;
    cin >> t;
    // pre();
    while (t--)
        solve();

    return 0;
}