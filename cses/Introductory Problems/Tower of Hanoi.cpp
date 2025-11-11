#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define op ios_base::sync_with_stdio(0);cin.tie(0);
vector<pair<int,int> > ans;//from,to
void move(int from,int to,int temp,int val){
    if(val==0) return;
    move(from,temp,to,val-1);
    ans.push_back({from,to});
    move(temp,to,from,val-1);
}
void f(int from,int to,int temp,int val){
    if(val==0) return;
    move(from,temp,to,val-1);
    ans.push_back({from,to});
    f(temp,to,from,val-1);
}

int32_t main(){
    op
    int n;cin>>n;
    f(1,3,2,n);
    cout<<ans.size()<<'\n';
    for(auto i : ans){
        cout<<i.first<<" "<<i.second;
        cout<<'\n';
    }
}