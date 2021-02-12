#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[5][5];
    for(int i=1 ; i<=5 ; i++)
    {
        for(int j=1 ; j<=5 ; j++)
        {
            cin >> array[i][j];
        }
    }

    int a,b;

    for(int i=1 ; i<=5 ; i++)
    {
        for(int j=1 ; j<=5 ; j++)
        {
            if(array[i][j]==1)
            {
                a=i;
                b=j;
                break;
            }
        }
    }

    cout << a << b ;

    return 0;

    cout << "dxgfcgvhbj" ;


}