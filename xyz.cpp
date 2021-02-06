#include <bits/stdc++.h>
using namespace std;

int diff(int x, int y)
{
    if(x>y)
    {
        return x-y ;
    }
    else if(y>x)
    {
        return y-x ;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
        int n;
        cin >> n ;
        int d, max=0;
        int array[n];
        for(int i=0 ; i<n ; i++)
        {
            cin >> array[i];
        }
        for(int i=0 ; i<n-2 ; i++)
        {
            for (int j=1; j<n-1; j++)
            {
                for(int k=2 ; k<n ; k++)
                {
                    d = diff(array[i],array[j]) + diff(array[j],array[k]) + diff(array[i],array[k]);
                    if(d>max)
                    {
                        max=d;
                    }

                }
            }
            
        }
    cout << max << "\n" ;
    }
}

