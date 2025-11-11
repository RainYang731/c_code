#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[N],loc[N],ans=1;

void solve(int x,int y){
    if (a[x]>1 && loc[a[x]-1]>loc[a[x]] && loc[a[x]-1]<=y) ans--;
    if (a[x]<n && loc[a[x]+1]>loc[a[x]] && loc[a[x]+1]<=y) ans++;
    
    
    if (a[y]>1 && loc[a[y]-1]<loc[a[y]] && loc[a[y]-1]>=x) ans++;
    if (a[y]<n && loc[a[y]+1]<loc[a[y]] && loc[a[y]+1]>=x) ans--;

    if (a[x]-a[y]==1) ans++;
    if (a[y]-a[x]==1) ans--;
}

int main(){
    cin>>n>>m;
    for (int i=1;i<=n;i++){
        cin>>a[i];
        loc[a[i]]=i;
    }
    for (int i=2;i<=n;i++){
        ans+=loc[i]>loc[i-1] ? 0 : 1;
    }
//    cout<<ans<<endl;
    
    int x,y;
    while (m--){
        cin>>x>>y;
        if (x>y) swap(x,y);
        
        solve(x,y);
        
        swap(loc[a[x]],loc[a[y]]);
        swap(a[x],a[y]);
        cout<<ans<<endl;
    }
    return 0;
}