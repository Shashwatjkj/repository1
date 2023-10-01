#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long int mod=1e9+7;
 
int main(){
   ios_base::sync_with_stdio(false);   cin.tie(NULL);    cout.tie(NULL);
       ll t;
       cin>>t;
       while(t--){
        ll q;
        cin>>q;
        ll arr[q];
        ll a;
        int co=0;
        int count=0;
        for(ll i=0;i<q;i++){
            cin>>arr[i];
            if(i==0){
                cout<<1;
            }
            else{
                if((arr[i]>=arr[i-1])&&(co==0)){
                    cout<<1;
                }
                else if(arr[i]<=arr[0]){
                    if(count==0){
                        cout<<1;
                        a=arr[i];
                        count++;
                        co++;
                    }
                    else if((arr[i]>=a)){
                            cout<<1;
                            a=arr[i];
                    }
                    else{
                        cout<<0;
                    }
                }
                else{
                  co++  ;
                cout<<0;
                }
            }
 
        }
        // for(auto x:v){
        //     cout<<x;
        // }
        cout<<endl;
       }
 
 
return(0);
}



// 1111000000010000000;
// 1111011010110000000;