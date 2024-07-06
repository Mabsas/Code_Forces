#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,p,q,count,z;
    count =0;

    cout<<"Enter number of rooms : ";
    cin>>n;

    for(int i =0;i<n;i++){

        cin>>p>>q;
        z = abs(p-q);


        if(z>=2){
            count++;
            z=0;
        }
    }
    cout<<count;
}