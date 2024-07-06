#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,x,y ;
    string s;
    x=y =0;

    cout<<"Enter number of games :   ";
    cin>>n;
    cout<<"ENter string : ";
    cin>>s;

    for(int i =0 ;i<s.length();i++){

        if(s[i]=='A'){
            x++;
        }
        else{
            y++;
        }
    }
    if(x>y){
        cout<<"Anton";
    }
    else if (x<y){
        cout<<"Danik";
    }
    else{

        cout<<"Friendship";
    }
}
