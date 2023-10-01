#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long int mod=1e9+7;
vector<int>generate(int n){
if(n==1){
vector<int>vec;    
vec.push_back(0);
vec.push_back(1);
return vec;
}
else{
vector<int>v=generate(n-1);
int a=v.size();
int x=v[1]<<n-1;
for(int i=a-1;i>=0;i--){
v.push_back(v[i]+x);
}
return v;
}
}
 
int main(){
   ios_base::sync_with_stdio(false);   cin.tie(NULL);    cout.tie(NULL);
       int n;
       cin>>n;
       vector<int>cc=generate(n);
       for(auto x: cc){
        cout<<bitset<32>(x)<<endl;
       }

return(0);
}