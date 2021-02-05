#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int divisor;
    for(int i=1; i<=10 ; i++)
    {
        if(n%i==0)
        {
            divisor=i;
        }
    }
    cout << divisor ;
}


