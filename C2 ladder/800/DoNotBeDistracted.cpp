#include<bits/stdc++.h>
using namespace std;
bool search(int i,string s,int n,char ch){
    for(int j=i+1;j<n;j++){
        if(ch==s[j]){
            return true;
        }
    } return false;
}
int main(){
  int t;
  cin>>t; 
  while(t--){
      bool flag=true;
    int n; cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
    if(s[i]==s[i+1]){
        continue;
    }
    else{
        if(search(i,s,n,s[i])){
            cout<<"NO";
            flag=false;
            break;
        }
    }
    } if(flag) cout<<"YES";
    cout<<endl;
  }
  return 0;
}
