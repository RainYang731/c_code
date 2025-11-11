#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define sekai ios_base::sync_with_stdio(0);cin.tie(0);
int32_t main(){
    int n;cin>>n;int len = n;
    queue<int> q;
    set<int> s;
    int ans = -1;
    while(n--){
        int a;cin>>a;
        if(q.empty()){
            q.push(a);
            s.insert(a);
            continue;
        }
        else if(*s.lower_bound(a) != a){
            q.push(a);s.insert(a);
        }else{
            int l = s.size();
            ans = max(ans,l);
            while(q.front() != a){
                s.erase(q.front());
                q.pop();
            }
            s.erase(q.front());
            q.pop();
            q.push(a);s.insert(a);
        }
    }
    int l = s.size();
    ans = max(ans,l);
    cout<<ans;
}
