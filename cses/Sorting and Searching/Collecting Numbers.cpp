#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main(){
    int n;cin>>n;
    vector<pair<int,int> > arr;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        arr.push_back({a,i});
    }
    sort(arr.begin(),arr.end());
    int ans = 1,now = arr[0].second;
    for(int i=1;i<n;i++){
        if(arr[i].second < now){
            ans++;
            now = arr[i].second;
        }else now = arr[i].second;
    }
    cout<<ans;
}