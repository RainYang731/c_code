#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main(){
    int n;cin>>n;
    vector<int> arr;
    int t;
    while(cin>>t){
        arr.push_back(t);
    }
    sort(arr.begin(),arr.end());
    int l = arr.size();
    for(int i=1,j=0;i<=n and j<l;i++,j++){
        if(i!=arr[j]){
            cout<<i;
            return 0;
        }
    }
    cout<<n;
}