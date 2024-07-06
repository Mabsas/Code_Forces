#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,h,a;
    int x,y;
    x=y=0;

    cout<<"Enter number of friends and height : ";
    cin>>n>>h;

    for(int i=1;i<=n;i++){

        cin>>a;


        if(a>h){
            x=x+2;
        }
        else{
            y++;
        }
    }

    cout<<"Width of the road : "<<(x+y);
}