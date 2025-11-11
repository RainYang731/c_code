#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main(){
    int n,m,k;cin>>n>>m>>k;
    vector<int> arr,brr;//arr : application,brr : apartment
    for(int i=0;i<n;i++){
        int a;cin>>a;arr.push_back(a);
    }
    for(int i=0;i<m;i++){
        int a;cin>>a;brr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end());
    int ia = 0 ,ib = 0,ans = 0;
    while(ia < n and ib < m){
        //cout<<arr[ia]<<' '<<brr[ib]<<'\n';
        if(arr[ia]<=brr[ib]+k and arr[ia] >= brr[ib]-k){
            ans++;ia++;ib++;
        }else if(arr[ia]>brr[ib]) ib++;
        else ia++;
    }
    cout<<ans;
}