#include<bits/stdc++.h>
using namespace std;
#define int int64_t
struct node{
    int l,r,id;
};
vector<node> arr;
vector<int> brr,temp;
struct segment{
    vector<int> tree,tmp;
    segment(int n) : tree(4*n,0) {
        tmp = tree;
    };
    void ch(){
        tree = tmp;
    }
    int query(int pos,int l,int r,int ql,int qr){
        if(ql<=l &&  qr>=r) return tree[pos];
        else if( qr < l or ql > r) return 0;
        int mid = (l+r)>>1;
        return query(pos*2+2,mid+1,r,ql,qr)+query(pos*2+1,l,mid,ql,qr);
    }
    void modify(int pos,int l,int r,int q){
        if(l>=r){
            tree[pos] = 1;
            return;
        }
        int mid = (l+r)>>1;
        if(q>mid) modify(pos*2+2,mid+1,r,q);
        else modify(pos*2+1,l,mid,q);
        tree[pos] = tree[pos*2+1]+tree[pos*2+2];
    }
};
signed main(){
    int n;cin>>n;
    vector<int> ans1(n),ans2(n);
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        arr.push_back({a,b,i});
        brr.push_back(b);
    }
    sort(brr.begin(),brr.end());
    sort(arr.begin(),arr.end(),[](node x,node y){
        if(x.l == y.l) return y.r<x.r;
        else return x.l<y.l; 
    });
    segment segment(n);
    map<int,int> mp;
    int de = 0;
    for(int i=0;i<n;i++){
        int id = upper_bound(brr.begin(),brr.end(),arr[i].r) - brr.begin()-1 - mp[arr[i].r];
        mp[arr[i].r]++;        
        ans1[arr[i].id] = segment.query(0,0,n-1,id,n-1);
        segment.modify(0,0,n-1,id);
    }
    segment.ch();
    de = 0;mp.clear();
    for(int i=n-1;i>=0;i--){
        int id = lower_bound(brr.begin(),brr.end(),arr[i].r) - brr.begin() + mp[arr[i].r];
        mp[arr[i].r]++;
        ans2[arr[i].id] = segment.query(0,0,n-1,0,id);
        segment.modify(0,0,n-1,id);
    }
    for(int i : ans2) cout<<i<<' ';
    cout<<'\n';
    for(int i : ans1) cout<<i<<' ';
}