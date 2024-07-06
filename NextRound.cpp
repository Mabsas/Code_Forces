#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){

    int n,k,score;
    int count = 0;
    int temp=0;

    cout<<"Enter number of Participants : ";
    cin>>n;
    cout<<"Enter k position player : ";
    cin>>k;
    vector<int>sc;  // creating a vector for score

    for(int i=1;i<=n;i++){

        cin>>score;
        sc.push_back(score);   //  storing the scores in vector sc

        if(i==k){
            temp = score;    //storing the k position contestants score 
        }
    }

    for(int element : sc){    // vector r element/score comapre korar structure

        if(element>=temp && element>0){
            count++;
        }
    }
    cout<<"Players moving next round : "<<count;

}