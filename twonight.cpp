#include<iostream>
using namespace std;
#define ll long long
long long int mod=1e9+7;
 
int main(){
   ios_base::sync_with_stdio(false);   cin.tie(NULL);    cout.tie(NULL);
       ll na;
       cin>>na;
       for(ll n=1;n<=na;n++){
       ll in=(n*n-1)*(n*n)/2;
       ll p=4*(n-2)*(n-1);
       ll k=in-p;
       cout<<k<<"\n";}


return(0);
}