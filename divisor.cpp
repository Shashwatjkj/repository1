#include<iostream>
using namespace std;
#include<string>
int main(){

string g;
getline(cin,g);
cout<<g;
int count=0;
int t=0;
for(int i=0;i<g.length();i++){
      
      if(t==4){
        break;
      }
      if((g[i]==' ')&&(t==0)){
        t++;
      }
      else if((g[i]=='i')&&(t==1)){
        t++;
      }
      else if((g[i]=='s')&&(t==2)){
        t++;
      }
      else if((g[i]==' ')&&(t==3)){
        t++;
      }
      else{
        t=0;
      }
}
cout<<"\n";
if(t==4)
cout<<"yes";
else
cout<<"no";


    return 0;
}