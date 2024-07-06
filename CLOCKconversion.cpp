#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string s, p;
    vector <string>  store;
    cin >> t;

    for(int i = 1; i <= t; i++){
        cin >> s;
        store.push_back(s);
    }

    for (int i = 0; i < store.size(); ++i) {
        size_t pos = store[i].find(':');
        
        if (pos != string::npos) { 
            string before_colon = store[i].substr(0, pos);
            int num = stoi(before_colon);
            if(num >12){
                num -= 12;
                p = " PM";
            }
            else if(num==00){
                num =12;
                p=" AM";
            }
            else if(num==12){
                p = " PM";

            }
            else{
                p = " AM";
            }
            stringstream ss;
            if(num < 10) {
                ss << "0";
            }
            ss << num;
            store[i] = ss.str() + store[i].substr(pos) + p;
        } 
    }

    for(const string& str : store) {
        cout << str << endl;
    }

}

//clock conversion
