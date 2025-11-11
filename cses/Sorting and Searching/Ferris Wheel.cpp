#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main(){
    int n,k;cin>>n>>k;
    vector<int> arr;
    while(n--){
        int a;cin>>a;
        arr.push_back(a);
    }
    int l = arr.size();
    sort(arr.begin(),arr.end());
    vector<bool> used(l,0);
    int i = l-1;int j = 0;
    int ans=0;
    while(i>j){
        if(arr[i]+arr[j]<=k){
            ans++;i--;j++;
        }else{
            ans++;i--;
        }
    }
    if(i==j) ans++;
    cout<<ans;
}