#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       int count=0 ;
       cin >> n ;
       int array[n];
       for(int i=0; i<n ; i++)
       {
           cin >> array[i];
       }
       for(int i=0; i<n ; i++)
       {
           if(array[i]%2!=0)
           {
               count++;
           }
       }

       if(count==n)
       {
           cout << "0" << "\n" ;
       }
       else if(count>=0 && count != n)
       {
           cout << count << "\n";
       }
       else
       {
           cout << "0" << "\n";
       }
       
        
    }
    return 0;
}
