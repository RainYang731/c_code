#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define GPT_is_MVP ios_base::sync_with_stdio(0);cin.tie(0);
int32_t main(){
    GPT_is_MVP
    int n;cin>>n;
    vector<pair<int,int> > arr;
    while(n--){
        int a,b;cin>>a>>b;
        arr.push_back({a,b});
    }
    int l = arr.size();
    sort(arr.begin(),arr.end());
    priority_queue<int> pq;
    int i = 0,ans = 0;
    while(i<l){
        if(pq.empty()){
            pq.push(-arr[i].second);
            i++;
        }
        else if(-pq.top()<=arr[i].first){
            ans++;
            while(!pq.empty()) pq.pop();
        }else{
            pq.push(-arr[i].second);
            i++;
        }
    }
    if(!pq.empty()) ans++;
    cout<<ans;
}