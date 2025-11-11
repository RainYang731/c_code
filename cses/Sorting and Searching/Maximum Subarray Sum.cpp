#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main(){
    int n;cin>>n;
    int arr[n+1];
    for(int i = 1;i<=n;i++) cin>>arr[i];
    int temp = 0,ans = -INT64_MAX;
    for(int i=1;i<=n;i++){
        temp += arr[i];
        ans = max(ans,temp);
        if(temp<0) temp = 0;
    }
    cout<<ans;
}