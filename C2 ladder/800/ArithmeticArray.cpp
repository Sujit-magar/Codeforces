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
    float c=sum/n;
    if(c==1) cout<<"0"<<endl;
    else if(sum-n>0) cout<<sum-n<<endl;
    else cout<<"1"<<endl;
  }
  return 0;
}
