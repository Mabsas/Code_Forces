#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int r = 5;
    int c = 5;
    int arr[r][c];
    int count1 = 0;
    int count2 = 0;

    for (r = 0; r < 5; r++)
    {

        for (c = 0; c < 5; c++)
        {

            cin >> arr[r][c];
        }
        cout << "\n";
    }

    for (r = 0; r < 5; r++)
    {
        for (c = 0; c < 5; c++)
        {

            if (arr[r][c] == 1)
            {

                if (r != 2 || c != 2)
                {

                    if (r >= 2 || r <= 2)
                    {

                        count1 = abs(r - 2);            // abs  is the absoulute value ans always positive ashe
                        if (c >= 2 || c <= 2)
                        {
                            count2 = abs(c - 2);
                        }
                    }

                    cout << "Moves : " << (count1 + count2);
                }
                else{
                    cout<<"Moves : "<<count1;
                }
            }
        }
    }
}
