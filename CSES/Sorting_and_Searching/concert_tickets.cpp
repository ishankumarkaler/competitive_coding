#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define mod 1000000007
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin>>n>>m;
    multiset<int, greater<int>> t;
    for(int  i = 0; i < n ; i++){
        int ticket;
        cin>>ticket;
        t.insert(ticket);
    }
    for(int i = 0; i < m; i++){
        int money;
        cin>>money;
        auto it = t.lower_bound(money);
        if(it == t.end()){
            cout<<"-1\n";
        }
        else{
            cout<<*it<<"\n";
            t.erase(it);
        }
    }
    
    return 0;
}
