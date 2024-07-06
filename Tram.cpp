#include<bits/stdc++.h>
#include<algorithm>
using namespace std;


int main(){

    int n,a,b;
    int count=0;
    vector<int> store;

    cout<<"Enter number of stops : ";
    cin>>n;
    
    cout<<"Enter number of passengers exiting and entering : ";
    for(int i =1; i<=n;i++){

        cin>>a>>b;
        count = count-a;
        count = count+b;
        store.push_back(count);

    }
    auto capacity  = max_element(store.begin(),store.end());  //auto is a key word that allows the compiler to determin the type of the variable capacity automatically based on the iterator inside the vector i.e is store.begin() and store.end()
    cout<<"Capacity of tram : "<< *capacity;        //*capacity refering the element in the capacity

}