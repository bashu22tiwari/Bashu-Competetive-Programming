#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    long int T,L,R,num,a;
    cin >> T ;
    
    while(T!=0){
    cin >> L ;
    
    cin >> R ;
    
    a=R-L+1;
    num= (a*(a+1))/2;
    cout << num << "\n";
    
        T--;
    }
    
}

