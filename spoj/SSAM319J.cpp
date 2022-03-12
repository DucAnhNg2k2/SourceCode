#include<bits/stdc++.h>
using namespace std;
 
string s;
int k,b,m,n;
int a[300'005];
deque<int> q;
 
int power(int heso,int mu)
{
	if( mu == 0 ) return 1;
	if( mu == 1 ) return heso%m;
	else
	{
		int temp = power(heso,mu/2)%m;
		if( !(mu&1) ) return (temp*temp)%m;
		else return (heso*temp*temp)%m;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cin >> s;
	cin >> k >> b >> m;
	n = s.size();
	s = ' ' + s;
	for(int i = 1 ; i <= n ; i++)
	{
		a[i] = s[i]-48;
	}
	int sum = 0;
	int sumarr = 0;
	for(int i = 1 ; i <= k ; i++ )
	{
		sumarr = sumarr*b + a[i];
		sumarr %= m;
		q.push_back(a[i]);
	}
	sum += sumarr;
	for(int i = k+1 ; i <= n ; i++ )
	{
		q.push_back(a[i]);
		int sodau = q.front();
		q.pop_front();
		sumarr -= (sodau)*power(b,k-1);
		while( sumarr < 0 ) sumarr += m;
		sumarr = sumarr*b + a[i];
		sumarr %= m;
		sum += sumarr;
	}
	cout << sum;
} 
