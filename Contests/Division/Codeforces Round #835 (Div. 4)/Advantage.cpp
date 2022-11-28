#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.push_back(x);
    }
    vector<int> s=v;
    sort(s.begin(),s.end());
    for(auto i:v){
        if(i==s[n-1]) cout<<i-s[n-2]<<" ";
        else cout<<i-s[n-1]<<" ";
    } cout<<endl;
    }
    return 0;
} 
