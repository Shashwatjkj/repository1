#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
ios_base::sync_with_stdio(false);   cin.tie(NULL);    cout.tie(NULL);
  ll testcase;
  cin>>testcase;
  while(testcase--){
      int n;
      cin>>n;
     bool v[n];
     for(int i=0;i<n;i++){
         cin>>v[i];
     }
     for(int i=0;i<n;i++){
         cout<<v[i]<<" ";
     }
     for(int i=n-2;i>=0;i--){
         if(v[i]){
             v[i+1]=0;
             v[i+2]=0;
         }
     }
    for(int i=0;i<n;i++){
        cout<<v[i];
    }     
     cout<<endl;
     
      
  }

	return 0;
}
