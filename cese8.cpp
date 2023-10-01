#include<iostream>
using namespace std;
#define ll long long
long long int mod=1e9+7;
 
int main(){
   ios_base::sync_with_stdio(false);   cin.tie(NULL);    cout.tie(NULL);
      int n;
      cin>>n;
      ll s=n*(n+1)/2;
      int y=1;
      if(s&1){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES\n";
        ll a;
        if(n%4==0){
            a=n/4;
            n=n+1;
            y--;
        }
        else{
          a=(n+1)/4;}

        cout<<2*a<<endl;
        ll i=1;
        for(;i<=a;i++){
            cout<<i<<" "<<n-i<<" ";
        }
        if(y)
            cout<<"\n"<<n-(2*a)<<"\n";
        else{
            cout<<"\n"<<n-(2*a)-1<<"\n";
        }
        for(ll j=a+1;j<=n-i;j++){
            cout<<j<<" ";
        }
        if(y)
        cout<<n;
      }
       


return(0);
}