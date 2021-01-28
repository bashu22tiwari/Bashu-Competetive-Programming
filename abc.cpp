#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0)
    {
        int q,d;
        cin >> q >> d ;
        int array[q];
        for(int i=0 ; i<q ; i++)
        {
            cin >> array[i];
        }

        for(int i=0 ; i<q ; i++)
        {
            if(array[i] >= 1 && array[i] < d)
            {
                cout << "NO" << "\n";
            }
            else if(array[i] >= d && array[i]%7==4)
            {
                cout << "NO" << "\n" ;
            }
            else
            {
                cout << "YES" <<"\n";
            }
        }
         t--;
    }

}
