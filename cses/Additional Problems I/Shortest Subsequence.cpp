#include<bits/stdc++.h>
using namespace std;
#define int int64_t
bool check(int arr[4]){
    return (arr[0] != -1 and arr[1] != -1 and arr[2] != -1 and arr[3] != -1);
}
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,ans;
    cin>>s;
    int l = s.size();
    map<char,int> mp = {{'A',0},{'T',1},{'G',2},{'C',3}};
    map<int,char> pm = {{0,'A'},{1,'T'},{2,'G'},{3,'C'}};
    for(int i=0;i<4;i++){
        int p[4] = {-1,-1,-1,-1},last[4] = {-1,-1,-1,-1};
        int now = -1;
        for(int j=0;j<l;j++){
            if(s[j]==pm[i] and now == -1) now = j;
            last[mp[s[j]]] = j;
        }
        int la = min(last[1],min(last[2],min(last[3],last[0])));
        vector<char> t;
        t.push_back(pm[i]);
        //cout<<now<<' '<<la<<'\n';
        if(now >= la) t.push_back(s[la]);
        else if(now!=-1){
            for(int j = now+1;j<l;j++){
                if(p[mp[s[j]]]==-1 and j>la){
                    t.push_back(s[j]);
                    t.push_back(s[la]);
                    break;
                }
                if(p[mp[s[j]]]==-1) p[mp[s[j]]] = j;
                if(check(p)){
                    t.push_back(s[j]);
                    for(int k=0;k<4;k++) p[k] = -1;
                }
            }
        }
        string o(t.begin(),t.end());
        if(ans.size() == 0) ans = o;
        else if(ans.size() > t.size()) ans = o;
        //cout<<t<<'\n';
    }
    cout<<ans;
}