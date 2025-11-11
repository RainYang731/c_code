#include<bits/stdc++.h>
using namespace std;
#define int int64_t 
int ans = 0;
vector<vector<char>> chessboard(8,vector<char>(8));
void check(vector<int> arr,int now){
    /*
    for(int i : arr) cout<<i<<' ';
    cout<<'\n'<<now<<'\n';
    cout<<"---------------\n";
    */
    if(now>=8){ans++;return;}
    for(int i=0;i<8;i++){
        if(chessboard[now][i] == '*') continue;
        int dec = 1;
        for(int j=0;j<arr.size();j++){
            if(arr[j]+now-j==i) dec=0;
            if(arr[j]-(now-j)==i) dec=0;
            if(arr[j]==i) dec = 0;
        }
        if(dec){
            arr.push_back(i);
            check(arr,now+1);
            arr.pop_back();
        }
    }
}
int32_t main(){
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            cin>>chessboard[i][j];
    vector<int> arr;
    check(arr,0);
    cout<<ans;
}