#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin>>s;
    ll count=0;
     ll k=1;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            k++;
        }
        else{
            count=max(count,k);
            k=1;
        }
    }
    count=max(count,k);
    cout<<count;



    return 0;
}