#include<bits/stdc++.h>
using namespace std;
int UCLN(int a, int b)
{
    while (a*b!=0)
    {
        if( a > b ) a %= b;
        else b %= a;
    }
    return a+b;
}
bool IsPrime(int x)
{
    if ( x<2 ) return false;
    for (int i=2; i<=sqrt(x); i++)
        if (x%i==0) return false;
    return true;
}
int main()
{
    int T;
    cin>>T;
    while(T--){
        int x;
        cin >> x;
        int dem = 0;
        for (int i=1; i<=x; i++)
        {
            if ( UCLN(i, x) == 1 )
                dem++;
        }
        if ( IsPrime(dem) )
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
} 
