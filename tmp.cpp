#include<bits/stdc++.h>
#include<string>
using namespace std;
 
int main(){
     
     int t;
     cin>>t;
     while(t--){
         int a;
         cin>>a;
         int arr[a];
         for(int i=0;i<a;i++){
             cin>>arr[i];
         }
         sort(arr,arr+a);
         int l=0;
         int r=a-1;
         int sum=0;
         while(l<=r){
             sum=sum+arr[r]-arr[l];
             l++;
             r--;
         }
         cout<<sum<<endl;
     }
     
     return 0;
}
