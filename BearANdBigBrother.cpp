#include<bits/stdc++.h>
using namespace std;


int main(){

    int a,b ;
    int count =0;

    cout<<"Enter Weight : ";
    cin>>a>>b;

    do
    {
        a*=3;
        b*=2;
        count++;
    } while (a<=b);
    
    cout<<count;
    
}