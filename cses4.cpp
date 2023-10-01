#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    vector<int>v(n);
    ll count=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(i){
            if(v[i]<v[i-1]){
                count=count+v[i-1]-v[i];
                v[i]=v[i-1];
            }
        }
    }
    cout<<count;

    return 0;
}