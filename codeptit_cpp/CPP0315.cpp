#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin >> s;
	bool dd[10] = {false} ;
	for(int i = s.size()-1 ; i >= 0 ; i-- )
	{
		int so = (int)(s[i]-'0');
		for(int j = so-1 ; j >= 0 ; j-- )
		{
			if( dd[j] )
			{
				for(int pos = i+1 ; pos < s.size() ; pos++ )
				{
					int ss = (int)(s[pos]-'0');
					if( ss == j )
					{
						swap(s[i],s[pos]);
						cout << s << endl;
						return ;
					}
				}
			}
		}
		dd[so] = true ;
	}
	cout << -1 << endl;
}

int main()
{
	cin.tie(NULL);
    int t;
    cin >> t;
    while( t-- )
	{
    	solve();
    }
} 
