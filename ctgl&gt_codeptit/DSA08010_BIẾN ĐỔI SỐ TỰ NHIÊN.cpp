#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
void solve()
{
	ll n;
	cin >> n;

	map<ll,ll> m;
	m[n] = 0;

	queue<pair<ll,ll>> q;
	q.push(make_pair(n,0));

	map<ll,ll>::iterator i;
	while( !q.empty() )
	{
		pair<ll,ll> temp = q.front();
		ll data = temp.first;
		ll ts = temp.second;
		q.pop();

		if( data == 1 )
		{
			i = m.find(data);
			cout << (*i).second << endl;
			return;
		}

		ll x1 = data-1;
		i = m.find(x1);
		if( i == m.end() || (*i).second > ts+1 )
		{
			m[x1] = ts+1;
			q.push(make_pair(x1,ts+1));
		}

		ll x2;
		for(ll ii = sqrt(data) ; ii >= 2 ; ii-- )
		{
			if( data%ii == 0 )
			{
				x2 = max(ii,data/ii);
				i = m.find(x2);
				if( i == m.end() || (*i).second > ts+1 )
				{
					m[x2] = ts+1;
					q.push(make_pair(x2,ts+1));
				}
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
	cin >> t;
	while ( t-- )
	{
		solve();
	}
}