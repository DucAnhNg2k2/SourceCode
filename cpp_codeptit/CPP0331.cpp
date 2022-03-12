#include<bits/stdc++.h>
using namespace std;

string Tong(string a,string b)
{	
	string res = "";
	while( a.size() < b.size() ) a = '0' + a;
	while( a.size() > b.size() ) b = '0' + b;
	int nho = 0 ;
	for(int i = a.size()-1 ; i >= 0 ; i-- )
	{
		int so = (int)(a[i]-'0') + (int)(b[i]-'0') + nho ;
		if( so >= 10 ) nho = 1;
		else nho = 0 ;
		res = (char)(so%10+'0') + res ;
	}
	if( nho == 1 ) res = '1' + res ;
	return res;
}

string s;
bool check;
void Try(int i,int n,int pos,int k,vector<string> d)
{
	if( i == n+1 && pos == k+1 )
	{
		check = true;
		return;
	}
	if( i > n || pos > k )
		return;
	
	if( d[pos].size() > n*1.0/k )
		return;
		
	if( pos == 1 || pos == 2 )
	{
		d[pos] += s[i];
		Try(i+1,n,pos,k,d);
		Try(i+1,n,pos+1,k,d);
	}
	else 
	{
		d[pos] = Tong(d[pos-1],d[pos-2]);
		for(int j = 0 ; j < d[pos].size() ; j++ )
		{
			if( i > n )
				return ;
			if( d[pos][j] == s[i] ) 
				i++;
			else 
				return;
		}
		Try(i,n,pos+1,k,d);
	}
}

void solve()
{

	cin >> s;
	int n = s.size();
	s = ' ' + s;
	vector<string> d(n+5,"");
	check = false;
	for(int k = 3 ; k <= s.size() ; k++ )
	{

		Try(1,n,1,k,d);
		if( check )
		{
			cout << "Yes" << endl;
			return;
		}
	}
	cout << "No" << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int t = 1;
	cin >> t;
	while( t-- )
	{
	 	solve();
	}
}

