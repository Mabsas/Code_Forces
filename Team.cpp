#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,p,v,t;
    int count =0;
    cout<<"Enter problems : ";
    cin>>n;
    cout<<"Enter state : ";
    for(int i=1 ;i<=n;i++){
        cin>>p>>v>>t; 

        if((p==0 && v==0)||(p==0 && t == 0)||(v==0 && t ==0)|| (p==0 && v==0 && t==0)){

                count++;
        }

    }
    cout<<" Problems they can solve :"<<n-count;

}