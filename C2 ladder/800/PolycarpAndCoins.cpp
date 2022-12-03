#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int c=n/3;
    if(n%3==0){
        cout<<n/3<<" "<<n/3<<endl;
    }
    else {
        if(c+2*(c+1)==n)
        cout<<n/3<<" "<<n/3+1<<endl;
        else 
        cout<<c+1<<" "<<c<<endl;
    }
    }
    return 0;
} 
