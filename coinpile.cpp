#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long int mod=1e9+7;
 bool is_integer(double z){
    if(z<0){
        return false;
    }
    double as=z-int(z);
    return !as;
 }
int main(){
   ios_base::sync_with_stdio(false);   cin.tie(NULL);    cout.tie(NULL);
       ll t;
       cin>>t;
       //cout<<is_integer(67);
       while(t--){
         double a,b;
        cin>>a>>b;
        
        double y=(2*a-b)/3;
        double x=(2*b-a)/3;
        // cout<<y<<" "<<x;
        // cout<<is_integer(y) << is_integer(x);
        if(a || b){
        cout<<"NO"<<"\n";
        }
        else if(is_integer(y) && is_integer(x)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
       }


return(0);
}