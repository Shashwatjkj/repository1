#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long int mod=1e9+7;
 
int main(){
   ios_base::sync_with_stdio(false);   cin.tie(NULL);    cout.tie(NULL);
       int t;
       cin>>t;
       while(t--){
        ll a,b;
        cin>>a>>b;

        if(a>b)swap(a,b);

        if(b>2*a){
            cout<<"NO"<<endl;
        }

        else if((a+b)%3==0){
            cout<<"YES\n";
        }
        else
        cout<<"NO"<<endl;
       }
       


return(0);
}