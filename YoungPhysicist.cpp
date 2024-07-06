#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m,x,y,z;
    int sum1,sum2,sum3;
    sum1=sum2=sum3=0;
    cout<<"Enter number  : ";
    cin>>n;
    for(int i =0;i<n;i++){


            cin>>x;
            sum1 = sum1+x;
            cin>>y;
            sum2 = sum2 +y;
            cin>>z;
            sum3 = sum3 +z;

        
        
    }
    //cout<<sum;
    if(sum1==0 && sum2 == 0 && sum3 == 0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
