#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    vector<int>arr(n+1,0);
    for(ll i=1;i<n;i++){
        ll a;
        cin>>a;
        arr[a]=a;
    }
    for(ll i=1;i<n+1;i++){
        if(arr[i]==0){
         cout<<i;
         break;
         }

    }


    return 0;
}