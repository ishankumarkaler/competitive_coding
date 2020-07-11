#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define mod 1000000007
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, prev, temp, ans = 0;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>temp;
        if(i != 0){
            if(prev > temp){
                ans += prev - temp;
            }
            else{
                prev = temp;
            }
        }
        else{
            prev = temp;
        }
 
    }
    
    cout<<ans;
    
    return 0;
}
