#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define miku ios_base::sync_with_stdio(0);cin.tie(0);
int32_t main(){
    miku
    int n;cin>>n;
    multiset<int> s;
    while(n--){
        int a;cin>>a;
        if(s.empty()){
            s.insert(a);
            continue;
        }
        auto it = s.upper_bound(a);
        if(it == s.end()){
            s.insert(a);
        }else{
            s.erase(it);
            s.insert(a);
        }
    }
    cout<<s.size();
}