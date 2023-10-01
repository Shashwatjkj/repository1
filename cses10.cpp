#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long int mod=1e9+7;
 
int main(){
   ios_base::sync_with_stdio(false);   cin.tie(NULL);    cout.tie(NULL);
       ll n;
       cin>>n;
       ll count=0;
       for(ll i=0;i<=n;i=i+5){
        ll a=i;
        while((a%5==0)&&a){
            count++;
            a=a/5;
        }   
       }
       cout<<count;;


return(0);
}