#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long int mod=1e9+7;
 
int main(){
   ios_base::sync_with_stdio(false);   cin.tie(NULL);    cout.tie(NULL);
       ll t;
       cin>>t;
       ll sum=1;
       for(ll i=1;i<=t;i++)
        sum=(sum*2)%mod;
       cout<<sum;
return(0);
}