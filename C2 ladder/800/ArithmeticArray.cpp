#include<bits/stdc++.h>
using namespace std;
#define pb push_back;
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
      v.pb(x);
      sum+=v[i];
    }
    if(sum/n==1) cout<<"0"<<endl;
    else if(sum-n<0)<<"1"<<endl;
    else cout<<sum-n<<endl;
  }
  return 0;
}
