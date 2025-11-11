#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main(){
    int n;cin>>n;
    vector<pair<int,int> > arr;
    while(n--){
        int a,b;cin>>a>>b;
        arr.push_back({a,b});
    }
    int l = arr.size();
    int ans = 0;
    sort(arr.begin(),arr.end());
    priority_queue<int> pq;
    for(int i=0;i<l;i++){
        if(pq.empty()){
            pq.push(-arr[i].second);
        }else{
            while(-pq.top()<arr[i].first){
                pq.pop();
                if(pq.empty()) break; 
            }
            pq.push(-arr[i].second);
        }
        if(pq.size()>ans) ans = pq.size();
    }
    cout<<ans;
}