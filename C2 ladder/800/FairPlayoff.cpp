#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t; 
  while(t--){
    vector<int> s;
    for(int i=0;i<4;i++){
        int x; cin>>x;
        s.push_back(x);
    }
    int a=max(s[0],s[1]);
    int b=max(s[2],s[3]);
    int c=min(s[0],s[1]);
    int d=min(s[2],s[3]);
    if(a<d||b<c) cout<<"NO";
    else cout<<"YES";
    cout<<endl;
  }
  return 0;
}
