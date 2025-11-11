#include<bits/stdc++.h>
using namespace std;
#define int int64_t 
int32_t main(){
    int n;cin>>n;
    vector<int> arr;
    while(n--){
        int a;cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    int l = arr.size();
    int ans = 0;
    if(l%2==1){
        int mid = l/2;
        for(int i=0;i<l;i++){
            ans += abs(arr[i]-arr[mid]);
        }
    }else{
        int mid = (arr[l/2]+arr[l/2-1])>>1;
        for(int i=0;i<l;i++){
            ans += abs(arr[i]-mid);
        }
    }
    cout<<ans;
}