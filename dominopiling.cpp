#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int m,n,j;

    cout<<"Enter squares : ";
    cin>>m>>n;

    int k =(m*n);
    cout<<"Number of boxes in rectangular area : "<<k<<"\n";

    if(k%2== 0){
        
        j = (k/2);
        cout<<"Required dominos : "<<j;

    }
    else{

        j = (k-1)/2;
        cout<<"Required dominos : "<<j;
    }

}