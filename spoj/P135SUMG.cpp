#include<bits/stdc++.h>
using namespace std;
long long a[200] , n , ts = 0 ; 
string s ;
 
void Check()
{
    bool checkL = false;
    long long Cach = 1;
    vector<int> b(300,5);
    for(int i = 1 ; i <= n ; i++ )
    {
        if( a[i] == 0 ) b[i] = 0 ;
        else b[i] = 1;
    }
	for(int i = 1 ; i <= n ; i++ ) if( b[i] == b[i-1] && b[i] == b[i+1] ) return ;
	for(int i = 1 ; i <= n ; i++ )
	{
		if( s[i] =='L' ) checkL = true ;
		if( s[i] =='_')
		{
			int dem ;
			if( a[i] == 0 ) dem = 5;
			if( a[i] == 1 ) dem = 20;
			if( a[i] == 2 )
			{
				dem = 1;
				checkL = true;
			}
			Cach *= dem ;
		}
	}
	if( checkL ) ts += Cach;
}
 
void Try(int i)
{
    if( s[i] != '_' )
    {
        if( i == n ) Check();
        else Try(i+1);
    }
    else
    {
        for(int j = 0 ; j <= 2 ; j++ )
        {
            a[i] = j;
            if( i == n ) Check();
            else Try(i+1);
        }
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin >> s;
    n = s.length();
    s = '@' + s ;
    for(int i = 1 ; i <= n ; i++ )
    {
        if( s[i] =='U' || s[i] == 'E' || s[i] == 'O' || s[i] =='A' || s[i] =='I') a[i] = 0;
        else a[i] = 1;
    }
    Try(1);
    cout << ts ;
}
 
