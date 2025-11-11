#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main(){
    string s;cin>>s;
    int l = s.size();
    char now = '0';
    int ans = -1,temp = -1;
    for(int i=0;i<l;i++){
        if(now!=s[i]){
            ans = max(ans,temp);
            now = s[i];
            temp = 1;
        }else{
            temp++;
        }
    }
    ans = max(ans,temp);
    cout<<ans;
}