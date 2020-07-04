#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define mod 1000000007
 
void solve(){
 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    ll a = 1;
    cin>>n;
    for(int i = 1; i <= n; i++){
        a = (a*2)%mod;
    }
    cout<<a;
    return 0;
}
