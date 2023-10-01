#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long int mod=1e9+7;
 ll logbase2(ll x){
    ll count=-1;
    while(x){
        x=x>>1;
        count++;
    }
    return count;
 }
 ll power(ll var,ll p){
    ll store=1;
    while(p--){
        store=(store*var)%mod;
    }
 return store;
 }
int main(){
   ios_base::sync_with_stdio(false);   cin.tie(NULL);    cout.tie(NULL);
       ll t;
       cin>>t;
       while(t--){
        ll n;
        cin>>n;
        ll k;
        cin>>k;
        ll sum=0;
       while(k){
        sum=(sum+power(n,logbase2(k)))%mod;
        k=k-power(2,logbase2(k));
       }
       cout<<sum<<endl;
       }


return(0);
}