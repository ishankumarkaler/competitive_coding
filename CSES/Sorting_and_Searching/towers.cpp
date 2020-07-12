#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define mod 1000000007
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, val;
    cin>>n;
    vector<int> towers;
    for(int i = 0; i < n; i++){
        cin>>val;
        auto it = upper_bound(towers.begin(), towers.end(), val);
        if(it == towers.end()){
            towers.push_back(val);
        } else{
            *it = val;
        }
    }
    cout<<towers.size();
    
    return 0;
}
