#include<bits/stdc++.h>
using namespace std;
#define int int64_t
#define I_love_Miku ios_base::sync_with_stdio(0);cin.tie(0);
int32_t main(){
    I_love_Miku
    vector<int> arr;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    int p = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>p+1){
            break;
        }
        else{
            p+=arr[i];
        }
    }
    cout<<p+1;
}