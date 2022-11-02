#include<bits/stdc++.h>
using namespace std;

long long power(long long a,long long b)
{
	if( b == 0 ) return 1;
	else if ( b == 1 ) return a%10 ;
	else 
	{
		long long temp = power(a,b/2)%10 ;
		if( b%2 == 0 ) return (temp*temp)%10 ;
		else return ( (temp*temp)%10 * a%10 )%10 ;
	}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ; 
    cin >> t;
	while( t-- )
	{
		string s ;
		cin >> s ;
		int t = 0 , dem = 0 ;
		for(int i = s.size()-1 ; i >= 0 ; i-- )
		{
			long long temp = power(2,dem)*(int)(s[i]-'0');
			temp %= 10 ;
			t += temp ;
			t %= 10 ;
			dem++;
		}
		if( t == 0 || t == 5 ) cout << "Yes" ;
		else cout << "No" ;
		cout << endl; 
	}
}

