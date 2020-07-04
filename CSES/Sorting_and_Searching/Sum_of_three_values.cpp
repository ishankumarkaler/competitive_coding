#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
     int n, x, temp;
    cin>>n>>x;
    vector<int> v(n, 0);
    map<int, vector<int>> hash;
    for(int j = 0; j < n; j++){
        cin>>temp;
        v[j] = temp;
        hash[temp].push_back(j+1);
    }
    int l, r;
    sort(v.begin(), v.end());
    for(int i = 0; i  < n-2; i++){
        l = i+1;
        r = n-1;
        while(l < r){
            if(v[i] + v[l] + v[r] == x){
                int a = hash[v[i]].back();
                hash[v[i]].pop_back();
                int a1= hash[v[l]].back();
                hash[v[l]].pop_back();
                int a2 = hash[v[r]].back();
                hash[v[r]].pop_back();
                cout<<a<<" "<<a1<<" "<<a2;
                exit(0);
            }
            else if(v[i] + v[l] + v[r] < x){
                l += 1;
            }
            else{
                r -= 1;
            }
        }
 
    }
    cout<<"IMPOSSIBLE";
}
