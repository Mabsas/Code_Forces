#include <iostream>
#include <string>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cout << "Enter string : ";
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    //cout << s;

    for (int i = 0; s[i]!='\0'; i++)
    {

        if ( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'|| s[i] == 'y')
        {

            s.erase(i,1);      // i refers to the position (index) of the character in the string that to be erased,and 1 refers to the number of characters to erase starting from that position.
            i--;
        }
        else{

            s.insert(i,".");
            i++;
            
        }
    }
    cout << s;
}
