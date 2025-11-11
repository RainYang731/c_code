#include<bits/stdc++.h>
using namespace std;
#define int int64_t
struct node{
    int l,r,id;
};
int32_t main(){
    int n;cin>>n;
    vector<node> arr;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        arr.push_back({a,b,i});
    }
    queue<int> spare;
    multiset<pair<int,int> > leave;
    vector<int> ans(n,0);
    sort(arr.begin(),arr.end(),[](node x,node y){
        if(x.l == y.l) return x.r<y.r;
        else return x.l < y.l;
    });
    int now = 0;
    for(int i=0;i<n;i++){
        auto it = leave.upper_bound({arr[i].l,INT64_MAX});
        vector<pair<int,int> > to_remove;
        for(auto itr = leave.begin(); itr != it;++it){
            spare.push(itr->second);
            to_remove.push_back(*itr);
        }
        for(auto &p : to_remove) leave.erase(p);
        if(spare.empty()){
            now++;
            ans[arr[i].id] = now;
            leave.insert({arr[i].r,now});
        }
        else{
            ans[arr[i].id] = spare.front();
            leave.insert({arr[i].r,spare.front()});
            spare.pop();
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<' ';
    }
}