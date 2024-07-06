#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    long long tmp;

    cin >> n >> k;

    if(n%2==0){

        tmp = n/2;

    }
    else{
        tmp = n/2 +1;
    }

    if(k<=tmp){
        cout<<(2*k)-1;
    }
    else{
        cout<<2*(k-tmp);
    }

}
