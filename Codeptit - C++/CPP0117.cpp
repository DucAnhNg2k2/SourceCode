#include<bits/stdc++.h>
using namespace std;

int dem , sum ;
void setting(long long n)
{
	dem = 0 , sum = 0 ;
	while( n > 0 )
	{
		dem++;
		sum += n%10 ;
		n/=10;
	}
}

void solve()
{
	long long n; 
	cin >> n;
	while( true )
	{
		setting(n) ;
		if( dem == 1 ) break ;
		else n = sum ;
	}
	cout << sum << endl; 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ; 
    cin >> t;
	while( t-- )
	{
		solve() ;
	}
}

