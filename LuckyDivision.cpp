#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int turn =-1;

    vector<int> lucky = {4,7,47,74,44,77,444,474,447,477,777,747,774,744};

    cout<<"Enter number : ";
    cin>>n;

    for(int i =0; i < lucky.size();i++){

        if(n % lucky[i]==0){
            turn =0;
            break;


        }
    }
    if(turn ==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }




}