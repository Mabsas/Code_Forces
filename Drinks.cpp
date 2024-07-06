#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    double sum =0;
    cin>>n;

    vector<int> store;

    for(int i =0;i<n;i++){

        int drinks;

        cin>>drinks;
        sum += drinks;
    }

    double percentage = (sum/(n*100))*100;
    cout<<percentage;
}