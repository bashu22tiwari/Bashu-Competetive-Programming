#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t ;
    int n ;
    while (t!=0)
    {
        cin >> n ;
        if (n%2021==0 || n%2020==0 || n%4041==0)
        {
            cout << "YES" << "\n" ;
        }
        else{
            cout << "NO" << "\n" ;
        }
        
        t--;
    }
    
}