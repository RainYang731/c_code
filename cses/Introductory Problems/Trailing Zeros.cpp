#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main(){
    int n;cin>>n;
    int t = 5;
    int ans = 0;
    while(t<=n){
        ans+=(n/t);
        t*=5;
    }
    cout<<ans;
}