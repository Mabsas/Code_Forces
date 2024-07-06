#include<bits/stdc++.h>
using namespace std;

int main(){


    long long int n;
    cout<<"Enter a number : ";
    cin>>n;

    int temp,count;
    temp=count =0;

    while (n>0)
    {
        temp=n%10;
        n=n/10;

        if(temp == 4 || temp==7){
            count++;
        }
    }
    if(count==4||count==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}

