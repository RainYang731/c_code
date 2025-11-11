#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main(){
    int n;cin>>n;
    queue<int> a;
    for(int i=1;i<=n;i++){
        a.push(i);
    }
    while(!a.empty()){
        a.push(a.front());
        a.pop();
        cout<<a.front()<<' ';
        a.pop();
    }
}