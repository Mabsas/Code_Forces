#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    int temp =0;

    cout<<"Enter a number : ";
    cin>>n>>k;

    for(int i =1;i<=k;i++){

        temp = n%10;

        if(temp==0){
            n=n/10;
        }
        else{

            n = n-1;
        }
    }
    cout<<n;
}