#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	queue<long long> q;
	q.push(9);
	while( true )
	{
		long long temp = q.front();
		if( temp%n == 0  )
		{
			cout << temp << '\n';
			break;
		}
		q.push(temp*10+0);
		q.push(temp*10+9);
		q.pop();
	}
}
int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		solve();
	}
} 
