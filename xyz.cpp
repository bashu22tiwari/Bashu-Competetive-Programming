#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        int flag=1;
        cin >> n >> k ;
        int array[n];
        for(int i=0 ; i<n ; i++)
        {
            cin >> array[i];
        }

        for(int i=0; i<n ; i++)
        {
            if((array[i]*10)%k != 0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout << "YES" << "\n" ;
        }
        else
        {
            cout << "NO" << "\n" ;
        }
    }
    return 0;
}
