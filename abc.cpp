#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long int mod=1e9+7;
 
int main(){
   ios_base::sync_with_stdio(false);   cin.tie(NULL);    cout.tie(NULL);
       int t;
       cin>>t;
       while(t--){
       string s;
       cin>>s;
       if(s=="abc" || s=="acb" || s=="bac" || s=="cba"){
        cout<<"YES"<<endl;}
       else{
        cout<<"no"<<endl;
       }
       }


return(0);
}