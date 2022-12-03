#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t; 
  while(t--){
    int n;
    cin>>n;
    int sum=0;
    vector<int> v;
    for(int i=0;i<n;i++){
      int x; cin>>x;
      v.push_back(x);
      sum+=v[i];
    }
    if(sum-n<0) cout<<"1";
    else cout<<sum-n;
    cout<<endl;
  }
  return 0;
}
