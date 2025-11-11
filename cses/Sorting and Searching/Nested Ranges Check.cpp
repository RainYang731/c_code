#include<bits/stdc++.h>
using namespace std;
#define int int64_t
struct node{
    int r,l,id;
};
int32_t main(){
    int n;cin>>n;
    vector<node> arr;
    vector<int> ans1(n),ans2(n);
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        arr.push_back({a,b,i});
    }
    sort(arr.begin(),arr.end(),[](node x,node y){
        if(x.l == y.l) return x.r>y.r;
        return x.l<y.l;
    });
    int mn = INT_MAX;
    for(int i=n-1;i>=0;i--){
        if(arr[i].r>=mn){
            ans1[arr[i].id] = 1;
        }
        mn = min(mn,arr[i].r);
    }
    int ma = 0;
    for(int i=0;i<n;i++){
        if(arr[i].r<=ma){
            ans2[arr[i].id] = 1;
        }
        ma = max(ma,arr[i].r);
    }
    for(int i : ans2) cout<<i<<' ';
    cout<<'\n';
    for(int i : ans1) cout<<i<<' ';
}