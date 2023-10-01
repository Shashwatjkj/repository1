#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long int mod=1e9+7;
 
int main(){
   ios_base::sync_with_stdio(false);   cin.tie(NULL);    cout.tie(NULL);
       string s;
       cin>>s;
       unordered_map<char,ll>mp;
       for(ll i=0;i<s.length();i++){
        mp[s[i]]++;
       }
       pair<ll,ll>count;
       for(auto x:mp){
         if(x.second & 1){
            count.first++;
         }
         else{
            count.second++;
         }
       }
       if(count.first==0 || count.first==1){
        string a,b;
        unordered_map<char,ll>::iterator v;
        for( v=mp.begin();v!=mp.end();){
            if(!(v->second&1)){
              for(ll i=0;i<(v->second/2);i++){
                   a.push_back(v->first);
                   b.push_back(v->first);
              } 
               v= mp.erase(v);
            }   
            else{
                ++v;
            }
        }
        if(!mp.empty()){
                auto r=mp.begin();
                for(ll i=0;i<r->second;i++)
                a.push_back(r->first);
            }
       cout<<a;
       for(ll i=b.length()-1;i>=0;i--){
        cout<<b[i];
       }
           }
       else{
        cout<<"NO SOLUTION";
       }

       


return(0);
}