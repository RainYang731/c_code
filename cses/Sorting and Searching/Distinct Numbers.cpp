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
    int len = unique(arr.begin(),arr.end())-arr.begin();
    cout<<len;
}