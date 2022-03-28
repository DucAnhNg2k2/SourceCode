#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,x,sum=0;
	cin >> n;
	priority_queue<int> a;
	priority_queue<int,vector<int>,greater<int>> b,c;

	for(int i = 1 ; i <= n ; i++ )
	{
		cin >> x;
		if( x%3 == 0 ) a.push(x);
		else if( x%3 == 1 ) b.push(x);
		else c.push(x);	
		sum += x;
	}
	
	if( sum%3 == 1 )
	{
		if( b.size() >= 1 ) b.pop() ;
		else if( c.size() >= 2 ) 
		{
			c.pop();
			c.pop();	
		}
		else
		{
			cout << -1 << endl;
			return;
		}	
	}	
	if( sum%3 == 2 )
	{
		if( c.size() >= 1 ) c.pop();
		else if( b.size() >= 2 ) 
		{
			b.pop();
			b.pop();	
		}
		else
		{
			cout << -1 << endl;
			return;
		}	
	}
	
	while(b.size()) 
	{
		a.push(b.top());
		b.pop();
	}
	while(c.size())
	{
		a.push(c.top());
		c.pop();
	}
	if(a.empty())
	{
		cout << -1 << endl;
		return ;
	}
	if(a.top() == 0)
	{
		cout << 0 << endl;
		return;
	}
	while(a.size()) 
	{
		cout << a.top();
		a.pop();
	}
	cout << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin >> t;
    while( t-- )
    {
    	solve();
	}
}