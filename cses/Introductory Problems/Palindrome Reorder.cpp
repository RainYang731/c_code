#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main(){
    string s;cin>>s;
    vector<int> arr(26,0);
    int l = s.size();
    for(int i=0;i<l;i++){
        arr[s[i]-'A']++;
    }
    int dec;
    if(l%2==0) dec = 1;
    else dec = 0;
    for(int i=0;i<26;i++){
        if(arr[i]%2==1) dec++;
    }
    if(dec >= 2) cout<<"NO SOLUTION";
    else{
        vector<char> be;
        string mid;
        for(int i=0;i<26;i++){
            while(arr[i]>=2){
                be.push_back(char('A'+i));
                arr[i]-=2;
            }
            if(arr[i]==1) mid = char('A'+i);
        }
        string b(be.begin(),be.end());
        string e = b;
        reverse(e.begin(),e.end());
        cout<<b+mid+e;
    }
}