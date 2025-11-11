#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main(){
    int n;cin>>n;
    while(n--){
        int a,b;cin>>a>>b;
        if(b>a) swap(a,b);
        int k = a-b;
        if(b-k<0) cout<<"NO";
        else if((b-k)%3==0) cout<<"YES";
        else cout<<"NO";
        cout<<'\n';
    }
}