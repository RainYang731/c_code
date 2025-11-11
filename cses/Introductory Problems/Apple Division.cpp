#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int ans = INT64_MAX;
int n;
void f(int now,int val,int _val,int arr[]){
    if(now>n) return;
    if(val-_val > ans) return;
    ans = min(ans,abs(val-_val));
    f(now+1,val,_val,arr);
    f(now+1,val+arr[now],_val-arr[now],arr);
}
int32_t main(){
    cin>>n;
    int arr[n+1];
    int sum = 0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    f(1,0,sum,arr);
    cout<<ans;
}