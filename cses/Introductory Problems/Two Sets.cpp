#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main(){
    int n;cin>>n;
    int k = n+1,t = n;
    if(k%2==0) k/=2;
    else t/=2;
    if((t*k)%2 == 1) cout<<"NO";
    else{
        cout<<"YES\n";
        if(n%2==0){
            cout<<n/2<<'\n';
            for(int i=1;i<=n/2;i+=2){
                cout<<i<<" "<<(n-i+1)<<' '; 
            }
            cout<<"\n"<<n/2<<'\n';
            for(int i=2;i<=n/2;i+=2){
                cout<<i<<" "<<(n-i+1)<<' ';
            }
        }
        else{
            cout<<n/2<<'\n';
            int be = n/2-n/2/2;
            int ed = n/2+n/2/2+1;
            for(int i=1;i<be;i++){
                cout<<i<<' ';
            }for(int i = ed+1;i<=n;i++){
                cout<<i<<' ';
            }cout<<'\n';
            cout<<n/2+1<<'\n';
            for(int i=be;i<=ed;i++){
                cout<<i<<' ';
            }
        }
    }
}