#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n , dem = 0 ;
	cin >> n;
	set<int> s;
	for(int i = 2 ; i <= sqrt(n) ; i++ )
	{
		while( n%i == 0 )
		{
			dem++;
			n/=i;
			s.insert(i);
		}
	}
	if( n > 1 )
	{
		dem++;
		s.insert(n) ;
	}
	if( dem == 3 && s.size() == 3 ) cout << 1 << '\n' ;
	else cout << 0 << '\n' ; 
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
	{
        solve();
    }
}
