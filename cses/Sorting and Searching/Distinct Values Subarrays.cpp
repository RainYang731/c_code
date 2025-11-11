#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define I_like_Miku ios_base::sync_with_stdio(0);cin.tie(0);
signed main(){
    I_like_Miku
    int n;cin>>n;
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++) cin>>arr[i];
    map<int,int> ms;//val,pos
    int ans = 0;
    int npos = 0;
    for(int i=1;i<=n;i++){
        auto it = ms.find(arr[i]);
        if(it != ms.end()){
            npos = max(npos,it->second);
        }
        ms[arr[i]] = i;
        ans += (i-npos);
    }
    cout<<ans;
}