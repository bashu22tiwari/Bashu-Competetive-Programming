#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
long long int n;
while (t!=0)
{
    cin >> n ;
    int flag;

    flag=0;

    for (long long int i=2 ; i<=n ; i++)
    {
        if(n%i==0 && i%2!=0){
            flag = 1 ;
            break;
            }
        
    }

    if(flag==1){
        cout << "YES" << "\n" ;
    }
    else{
        cout << "NO" << "\n";
    }

    t = t-1;
    
}
}
