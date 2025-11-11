#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define I_love_neo ios_base::sync_with_stdio(0);cin.tie(0);
int32_t main(){
    I_love_neo
    int x,n;cin>>x>>n;
    multiset<int> ms;
    set<int> s;
    while(n--){
        int a;cin>>a;
        auto it = s.lower_bound(a);
        if(it != s.end() and *it == a ) continue;
        int l,r,sum;
        if(it == s.end()) r = x-a;
        else r = *it-a;
        if(it == s.begin()) l = a;
        else l = a-*--it;
        sum = l+r;
        //cout<<l<<"-\n";
        //cout<<r<<"--\n";
        //cout<<sum<<"---\n";
        if(ms.find(sum)!=ms.end()) ms.erase(ms.find(sum));
        ms.insert(l);ms.insert(r);
        s.insert(a);
        cout<<*--ms.end()<<' ';
    }
}