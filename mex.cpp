#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long int mod=1e9+7;
 
int main(){
   ios_base::sync_with_stdio(false);   cin.tie(NULL);    cout.tie(NULL);
       int t;
       cin>>t;
       while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        if((c>=b-1) && (a>=b) ){
            if(b!=c)
             cout<<(((b-1)*b/2)+(a-b)*c)<<endl;
            else
              cout<<(((b-1)*b/2)+(a-b)*(c-1))<<endl;
        }
        else{
            cout<<-1<<endl;
        }
       
       }

return(0);
}