#include<iostream>
using namespace std;
#define ll long long
int main(){
    ll a;
    cin>>a;
    cout<<a<<" ";
    while(a!=1){
    if(a&1){
        a=3*a+1;
        cout<<a<<" ";
    }
    else{
        a=a/2;
        cout<<a<<" ";
    }
    }
}