#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define mod 1000000007
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, val, max_val;
    cin>>n;
    if(n < 4){
        if(n != 1)
        cout<<"NO SOLUTION";
        else
            cout<<1;
    }
    else{
        val = 2;
        for(int i = 0; i < n; i++){
            if(val > n){
                val = 1;
            }
            cout<<val<<" ";
            val += 2;
        }
    }
    
    return 0;
}
