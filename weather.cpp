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
        vector<ll>vec(n);
        vector<ll>vec1(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            vec1[i]=vec[i];
        } 
        sort(vec1.begin(),vec1.end());
        vector<ll>sec(n);
        for(int i=0;i<n;i++){
            cin>>sec[i];
        }
        sort(sec.begin(),sec.end());
        unordered_multimap<ll,ll>mp;
        for(int i=0;i<n;i++){
            mp.insert({vec1[i],sec[i]});
        }
        unordered_multimap<ll,ll>::iterator it;
        for(int i=0;i<n;i++){
            it=mp.find(vec[i]);
            cout<<it->second<<" ";
            mp.erase(it);
        }
        
        cout<<endl;
       }


return(0);
}