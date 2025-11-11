#include<bits/stdc++.h>
using namespace std;
#define int int64_t
vector<int> seg,arr;
void build(int l,int r,int p){
    if(l>=r) seg[p] = arr[l];
    else{
        int m = (l+r)>>1;
        build(l,m,p*2+1);
        build(m+1,r,p*2+2);
        seg[p] = seg[p*2+1]+seg[p*2+2];
    }
}
int query(int ql,int qr,int l,int r,int p){
    if(qr < l and ql > r) return 0;
    else if( l >= ql && r <= qr) return seg[p];
    int m = (l+r)>>1;
    if( qr <= m) return query(ql,qr,l,m,2*p+1);
    else if(ql > m) return query(ql,qr,m+1,r,2*p+2);
    return query(ql,qr,l,m,2*p+1)+query(ql,qr,m+1,r,p*2+2);
}
int modify(int pos,int val,int l,int r,int p){
    if(l>=r){
        seg[p] = val;
        return val;
    }
    int m = (l+r)>>1;
    if(pos <= m) return seg[p] = modify(pos,val,l,m,2*p+1)+seg[2*p+2];
    else return seg[p] = modify(pos,val,m+1,r,2*p+2)+seg[2*p+1];
}
int32_t main(){
    int n,m;cin>>n>>m;
    seg.resize(4*n);
    arr.resize(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    build(1,n,0);
    //for(int i : seg) cout<<i<<' ';
    cout<<'\n';
    while(m--){
        int t,a,b;
        cin>>t>>a>>b;
        if(t==2){
            cout<<query(a,b,1,n,0)<<'\n';
        }else{
            modify(a,b,1,n,0);
        }
    }
    //for(int i : seg) cout<<i<<' ';
}