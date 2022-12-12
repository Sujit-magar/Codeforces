#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back 

void solve(){
    ll n; 
    cin>>n; 
    vector<ll> v; 
    ll a=0,b=0;
    for(ll i=0;i<n;i++){
     ll x; 
    cin>>x; 
    v.pb(x);
    }
    sort(v.begin(),v.end()); 
    if(v[0]==v[n-1]) cout<<n*(n-1); 
    else { 
     for(ll i=0;i<n;i++){
     if(v[0]==v[i]) a++;
    else if(v[n-1]==v[i]) b++;
    }
    ll result=a*b;  
     cout<<result*2; 
    } 
    cout<<endl;
}
int main()
{
    int t; cin>>t; 
    while(t--){
    solve();
    }
    return 0;
}
