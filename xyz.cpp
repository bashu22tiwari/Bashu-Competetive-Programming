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
            int a, b, c;
            a= array[i];
            b= array[i+1];
            c= array[i+2];
            d = diff(a,b) + diff(b,c) + diff(a,c);
            if(d>max)
            {
                max=d;
            }
        }
    cout << max << "\n" ;
    }
}


