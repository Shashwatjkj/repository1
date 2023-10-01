#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long int mod=1e9+7;
 
int main(){
   ios_base::sync_with_stdio(false);   cin.tie(NULL);    cout.tie(NULL);
       long long t;
       cin>>t;
       while(t--){
        long long n;
        cin>>n;
        long long arr[n];
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        long long count=0;
        long long flag=0;
        for(long long i=0;i<n;i++){
            if((arr[i]<0)&&(flag==0)){
                count++;
                flag++;
            }
            if((flag==1)&&(arr[i]<0)){
                arr[i]=arr[i]*(-1);
            }
            else if((arr[i]>0)&&(flag==1)){
                flag=0;
            }
            
        }
        long long sum=0;
        for(long long i=0;i<n;i++){
            sum=sum+arr[i];
        }
            cout<<sum<<" "<<count<<endl;
       }


return(0);
}