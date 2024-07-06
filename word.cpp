#include<bits/stdc++.h>
#define lonfg long int 
#include<algorithm>
using namespace std;

int main(){
    string s;
    cout<<"Enter String : ";
    cin>>s;
    int l =0;
    int u= 0;

    for(int i = 0;s[i]!='\0';i++){

        if(islower(s[i])){
            l++;
        }
        if(isupper(s[i])){
            u++;
        }
    }
    if(l>u){

        transform(s.begin(),s.end(),s.begin(), :: tolower);
        cout<<s;
    }
    else if (l<u){
        transform(s.begin(),s.end(),s.begin(),:: toupper);
        cout<<s;
    }
    else{
        transform(s.begin(),s.end(),s.begin(), :: tolower);
        cout<<s;
    }

}