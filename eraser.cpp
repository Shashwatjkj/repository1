#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long int mod=1e9+7;
 
int main(){
   ios_base::sync_with_stdio(false);   cin.tie(NULL);    cout.tie(NULL);
       ll t;
       cin>>t;
       while(t--){
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll count=0;
        for(ll i=0;i<(n+1-k);i++){
            if(s[i]=='B'){
                count++;
                for(ll j=i;j<=i+k-1;j++){
                    if(s[j]=='B'){
                        s[j]='W';
                    }
                }
            }
        }
        for(ll i=(n+1-k);i<n;i++){
            if(s[i]=='B'){
                count++;
                break;
            }
        }

            cout<<count<<endl;
       }


return(0);
}