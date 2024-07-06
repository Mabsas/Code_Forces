#include<bits/stdc++.h>
using namespace std;


bool occurence(int x){
    string s = to_string(x);
    sort(s.begin(),s.end());

    for(int i = 0; i <s.length()-1;i++){ //this loop check korbe kono same element ase kina thakle false retun korbe and year ek kore barbe
                                         // i =3 hole next e null character for comparison ,, the output wrong tai 2 and 3 compare korle hocche cz sorted obosthai last 2ta char same hoi and year 4 digit r beshi hoi na
        if(s[i]==s[i+1]){
            
            return false;
        }
    }
    return true;



}
int main(){

    int y;


    cout<<"Enter year : ";
    cin>>y;

    while(true){        //infinite loop
        y=y+1;
        if(occurence(y)){  // while loop stop hobe only if this one becomes true
            break;

        }

    }
    cout<<y;
    return 0;
    
}
