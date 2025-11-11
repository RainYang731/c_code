#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int k;cin>>k;
    while(k--){
        int a,b;cin>>a>>b;
        if(a>=b){
            if(a%2==0){
                cout<<a*a-b+1;
            }else{
                cout<<(a-1)*(a-1)+b;
            }
        }
        else{
            if(b%2==1){
                cout<<b*b-a+1;
            }else{
                cout<<(b-1)*(b-1)+a;
            }
        }
        cout<<'\n';
    }
}