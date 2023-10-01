#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long int mod=1e9+7;
 
int main(){
   ios_base::sync_with_stdio(false);   cin.tie(NULL);    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll a;
        cin>>a;
        ll sum=0;
        while(a>=1){
            sum=sum+a;
            a=a/2;
        }
        cout<<sum<<endl;
    }


return(0);
}