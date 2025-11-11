#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define I_love_Miku ios_base::sync_with_stdio(0);cin.tie(0);
int32_t main(){
    I_love_Miku
    int n,m;cin>>n>>m;
    multiset<int> mp;
    while(n--){
        int a;cin>>a;
        mp.insert(a);
    }
    while(m--){
        int a;cin>>a;
        auto it = mp.upper_bound(a);
        if(it == mp.begin()){
            cout<<-1;
        }else{
            --it;
            cout<<*it;
            mp.erase(it);
        }
        cout<<'\n';
    }
}