#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main(){
    int n;cin>>n;
    int ans = 1;
    const int mod = 1e9+7;
    for(int i=1;i<=n;i++){
        ans = (ans*2)%mod;
    }
    cout<<ans;
}