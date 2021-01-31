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
       int odd=0, even=0;
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
               odd++;
           }
           else
           {
               even++;
           }
       }

       if(odd==n)
       {
           cout << "0" << "\n" ;
       }
       else if(odd>=0 && odd!=n && odd<even)
       {
           cout << odd << "\n";
       }
       else if(even>=0 && even!=n && even<odd)
       {
           cout << even << "\n";
       }
       else if(even==odd)
       {
           cout << even << "\n";
       }
       else
       {
           cout << "0" << "\n";
       }
       
        
    }
    return 0;
}
