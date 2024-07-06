#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,p;
    int count =0;
    vector<int> store;
    cout<<"Enter people number : ";
    cin>>n;

    for(int i =1;i<=n;i++){

        cin>>p;
        store.push_back(p);

    }

    for(int i =0;i<store.size();i++){

        if(store[i] == 1){
            count = 1;
        }
        
    }
    if(count==1){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }

}