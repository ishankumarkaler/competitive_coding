#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define mod 1000000007
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, s1, s2;
    cin>>s;
    map<char, int> hs;
    for(char& c:s){
        if(hs.find(c) == hs.end()){
            hs[c] = 1;
        }
        else{
            hs[c] += 1;
        }
    }
    bool state = false;
    string c;
    for(auto& it:hs){
        if(it.second%2 != 0){
            if(state){
                cout<<"NO SOLUTION";
                exit(0);
            }
            state = true;   
            c = string(1, it.first);
        }
        for(int i = 0; i < (it.second/2); i++){
            s1 += it.first;
            s2 += it.first;
        }
    }
    
    reverse(s2.begin(), s2.end());
    string ans = s1 + c + s2;
    
    cout<<ans;
}
