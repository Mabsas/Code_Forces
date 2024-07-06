#include<bits/stdc++.h>
using namespace std;


int main(){

    string s;
    cout<<"Enter string : ";
    cin>>s;
    int x,y,z;
    x=y=z=0;
    int uniq =-1;


    for(int i =0;i<s.length();i++){


        if(s[i]=='1'){

            x++;
            y=0;
            if(x>=7){

                cout<<"YES";
                uniq = 0;
                break;
            }

        }
        else{

            y++;
            x=0;
            if(y>=7){
                cout<<"YES";
                uniq =0;
                break;
            }
        }
    }
    if(uniq == -1){
        cout<<"NO";
    }
    
    
}