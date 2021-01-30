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
           if(array[i]%2!=0)
           {
               count++;
           }
       }
       if(count%2==0){ cout << "1" << "\n" ;}
       else { cout << "2" << "\n" ;}
        
    }
    return 0;
}
