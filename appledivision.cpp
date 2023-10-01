#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long int mod=1e9+7;
 
int main(){
   ios_base::sync_with_stdio(false);   cin.tie(NULL);    cout.tie(NULL);
       int n;
       cin>>n;
       vector<ll>vec(n);
       ll sum=0;
       for(int i=0;i<n;i++){
        cin>>vec[i];
        sum=sum+vec[i];
       }
        ll half=sum/2;
        sort(vec.begin(),vec.end());
        ll count=vec[n-1];
       for(int i=0;i<n-1;i++){
        count=count+vec[i];
        if(count>half){
        count=count-vec[i];
            break;
        }
       }
       cout<<abs(sum-(2*count));

return(0);
}