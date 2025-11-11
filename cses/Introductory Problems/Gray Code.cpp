#include<bits/stdc++.h>
using namespace std;
#define int int64_t
signed main(){
    int n;cin>>n;
    int t = pow(2,n);
    string s[t];
    t = 1;
    for(int i=1;i<=n;i++){
        t = t*2;
        for(int j=0;j<t/2;j++){
            s[t-j-1] = s[j]+'1';
            s[j] += '0';
        }
        /*
        for(int i=0;i<t;i++){
            cout<<s[i]<<'\n';
        }
        cout<<"------------------\n";
        */
    }
    for(int i=0;i<t;i++){
        cout<<s[i]<<'\n';
    }
}