#include<bits/stdc++.h>
using namespace std;
#define int int64_t 
#define I_love_Miku ios_base::sync_with_stdio(0);cin.tie(0);
int32_t main(){
    I_love_Miku
    int n,k;cin>>n>>k;
    vector<pair<int,int> > arr;//val , pos;
    for(int i=1;i<=n;i++){
        int a;cin>>a;
        arr.push_back({a,i});
    }
    sort(arr.begin(),arr.end());
    int len = arr.size();
    for(int i=0;i<arr.size();i++){
        int val = k - arr[i].first;
        if( arr[i].first > val ) continue;
        int l = -1,r = len,mid;
        while(l<r-1){
            mid = (l+r)>>1;
            if(val>arr[mid].first) l = mid;
            else r = mid;
        }
        while(arr[r].first==val){
            if(arr[i].second!=arr[r].second){
                cout<<arr[i].second<<' '<<arr[r].second;
                return 0;
            }
            r++;
        }
    }
    cout<<"IMPOSSIBLE";
}