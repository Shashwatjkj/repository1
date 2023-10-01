#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    vector<int>v(n);
    ll j=1;
    if(n==2 || n==3){
        cout<<"NO SOLUTION";
        return 0;
    }
    for(ll i=0;i<n;i=i+2){
        v[i]=j;
        j++;
    }
    for(ll i=1;i<n;i=i+2){
        v[i]=j;
        j++;
    }
    if(n==4){
        v={2,4,1,3}; 
    }
    for(auto x:v){
        cout<<x<<" ";
    }


    return 0;
}