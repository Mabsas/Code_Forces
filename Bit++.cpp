#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;


int main(){
    
    int n;
    string mode;
    int x=0;

    cout<<"Enter number of case :";
    cin>>n;

    for(int i =1;i<=n;i++){

        cin>>mode;
        
        if(mode == "++X"|| mode == "X++"){
             x++;
        }
        if(mode == "--X"|| mode == "X--"){
            x--;
        }
    }
    cout<<x;

}