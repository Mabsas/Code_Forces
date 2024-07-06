#include<iostream>
#include<string>
using namespace std;

int main(){

    string s;
    cout<<"Enter your word : ";
    cin>>s;
    
    if(islower(s[0])){

        s[0]= toupper(s[0]);
        cout<<s;
    }
    else{
        cout<<s;
    }

}
