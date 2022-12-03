#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t; 
  while(t--){
    int n;
    cin>>n;
    int res=0;
    while(n--){
        res++;
        if(res%3==0||res%10==3){
           res++;
           if(res%3==0||res%10==3){
           res++;
        }
        }
    } cout<<res<<endl;
  }
  return 0;
}
