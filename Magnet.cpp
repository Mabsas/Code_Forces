#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count;
    string s;
    count =0;
    vector<string> store;
    cout<<"Enter number : ";
    cin>>n;

    for(int i =0;i<n;i++){

        cin>>s;
        store.push_back(s);
    }

    for(int i =0;i<store.size();i++){

        if(store[i]!=store[i+1]){

            count++;
        }
    }
    cout<<count;
}