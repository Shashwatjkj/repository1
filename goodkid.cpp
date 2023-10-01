#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long int mod=1e9+7;
 
int main(){
   ios_base::sync_with_stdio(false);   cin.tie(NULL);    cout.tie(NULL);
       int t;
       cin>>t;
       while(t--){
         char arr[10][10];
         for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>arr[i][j];
            }
         }

         ll sum=0;
        
         for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                 if(((i>3)&&(i<6))&&((j>3)&&(j<6))&& arr[i][j]=='X'){
                    sum=sum+5;
                }
                else if(((i>2)&&(i<7))&&((j>2)&&(j<7))&& arr[i][j]=='X'){
                    sum=sum+4;
                }
                else if(((i>1)&&(i<8))&&((j>1)&&(j<8))&& arr[i][j]=='X'){
                    sum=sum+3;
                }
                else if(((i>0)&&(i<9))&&((j>0)&&(j<9))&& arr[i][j]=='X'){
                    sum=sum+2;
                }
                else if(arr[i][j]=='X'){
                    sum=sum+1;
                }
            }

         }
         cout<<sum<<endl;
     
       }


return(0);
}