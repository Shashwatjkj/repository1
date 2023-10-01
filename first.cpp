#include<iostream>
using namespace std;
bool isinteger(double a){
    if (a==0)
    return true;
    double d=a-int(a);
    if((d==0))
    return true;
    else
    return false;
}

int main(){
    	ios_base::sync_with_stdio(false);      cin.tie(NULL);         cout.tie(NULL);
long long  t;
cin>>t;
while(t--){
   double n,k;
   cin>>n>>k;
   double arr[int(n)];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   long count=0;
   for(int i=0;i<n;i++){
        double ss=(arr[i]-i-1)/k;
        if(isinteger(ss)){   
        }
        else
        count++;

   }
   if(count>2)
   cout<<-1<<endl;
   else if (count==2) 
   cout<<1<<endl;
   else if(count==0)
   cout<<0<<endl;

  }
    return 0;
}