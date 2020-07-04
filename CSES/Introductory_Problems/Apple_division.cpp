#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define mod 1000000007
 
ll minPartitioin(const vector<ll>& a, ll n, ll sum1, ll sum2){
    if(n < 0)
        return abs(sum1 - sum2);
    ll left = minPartitioin(a, n-1, sum1 + a[n], sum2);
    ll right = minPartitioin(a, n-1, sum1 , sum2 + a[n]);
 
    return min(left, right);
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll n, temp, sum_ = 0;
    vector<ll> v;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>temp;
        sum_ += temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    cout<<minPartitioin(v, n, 0, 0);
}
