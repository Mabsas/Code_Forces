#include <iostream>
#include <string>
#include<set>
using namespace std;

int main()
{

    string name;
    cout << "Enter name : ";
    cin >> name;
    int count =0;

    set<char> amount;   //declaring a set for storing unique element

    for(char c : name){         //iterating through each character of the "name" string given by user its storing the unique element in the set

        amount.insert(c);
    }

    count = amount.size();      //checking how many unique elements are there after discarding the duplicate
    //cout<<count;

    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }

}