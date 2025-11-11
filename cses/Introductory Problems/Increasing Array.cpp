#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main(){
    int n;cin>>n;
    vector<int > arr(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int ans = 0;
    for(int i=2;i<=n;i++){
        if(arr[i]<arr[i-1]){
            ans+=arr[i-1]-arr[i];
            arr[i] = arr[i-1];
        }
    }
    cout<<ans;
}