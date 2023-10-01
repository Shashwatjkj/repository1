#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main(){
   ll t;
   cin>>t;
   while(t--){
    ll row,col;
    cin>>row>>col;
    if(col<=row){
        if(row&1){
            ll a=(row-1)*(row-1);
            cout<<a+col<<"\n";
        }
        else{
            ll a=row*row;
             cout<<a-col+1<<"\n";
        }
    }
    else{
        if(col&1){
            ll b=col*col;
            cout<<(b-row+1)<<"\n";
        }
        else{
            ll a=(col-1)*(col-1);
             cout<<a+row<<"\n";
        }
    }
   


   }
    return 0;
}
