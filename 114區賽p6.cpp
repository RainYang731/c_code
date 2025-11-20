#include<bits/stdc++.h>
using namespace std;

bool compare(vector<int> arr,vector<int> brr){
    if(arr.size() > brr.size()) return true;
    else if(brr.size() > arr.size()) return false;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>brr[i]) return true;
    }
    return false;
}

signed main(){
    int n,m;cin>>n>>m;
    int arr[n+1],brr[m+1];
    for(int i=1;i<=n;i++) cin>>arr[i];
    for(int i=1;i<=m;i++) cin>>brr[i];
    vector<vector<int> > dp(m+1),tmp(2);
    
    for(int i=1;i<=n;i++){
        tmp[1].clear();
        for(int j=1;j<=m;j++){
            tmp[(j+1)%2] = dp[j];
            if(abs(arr[i]-brr[i])<=1){
                tmp[j%2].push_back(arr[i]);
                if(compare(dp[m],tmp[j%2])) tmp[j%2] = dp[m];
                if(compare(dp[m-1],tmp[j%2])) tmp[j%2] = dp[m-1];
                dp[j] = tmp[j%2];
            }
            else if(compare(dp[m-1],dp[m])){
                dp[j] = dp[m-1];
            }
        }
    }
    
    for(int i : dp[m]) cout<<i<<' ';
}
/*
dp[m-1]
tmp     dp[m]
*/