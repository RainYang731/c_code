#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1) cout<<0;
        else if(i==2) cout<<6;
        else if(i==3) cout<<28;
        else if(i==4) cout<<96;
        else{
            int ans,k = i*i;
            ans = 4*(k-3);
            ans += 8*(k-4);
            ans += 4*(i-4)*(k-5);
            ans += 4*(k-5);
            ans += 4*(i-4)*(k-7);
            ans += ((i-4)*(i-4))*(k-9);
            cout<<ans/2;
        } 
        cout<<'\n';
    }
}