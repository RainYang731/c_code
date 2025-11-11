#include<bits/stdc++.h>
#include<bits/extc++.h>
using namespace __gnu_pbds;
using namespace std;
signed main(){
    int n,k;cin>>n>>k;
    tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> rbt;
    for(int i=1;i<=n;i++){
        rbt.insert(i);
    }
    int t = 0;
    while(!rbt.empty()){
        int temp;
        t = (t+k)%rbt.size();
        temp = *rbt.find_by_order(t);
        rbt.erase(temp);
        cout<<temp<<' ';
    }
}