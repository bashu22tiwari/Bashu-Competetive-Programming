#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int n ;
    cin >> n ;
    int count=0;
    while(n--)
    {
        int p, q;
        cin >> p >> q ;
        if((q-p)>=2)
        {
            count++;
        }
    }

    cout << count ;
}