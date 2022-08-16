#include<bits/stdc++.h>
using namespace std;

long long to_int(string s)
{
	long long res =0  ;
	for(int i = 0 ; i < s.size() ; i++ ) res = res*10 + (int)(s[i]-'0');
	return res;
}
void solve()
{
	stringstream ss ;
	string s;
	getline(cin,s);	
	vector<string> v;
	ss << s ;
	while( ss >> s )
	{
		v.push_back(s);
	}
	int demc = 0 , deml = 0;
	for(int i = 0 ; i < v.size() ; i++ )
	{
		long long tt = to_int(v[i]);
		if( tt&1 ) deml++;
		else demc++;
	}
	if( v.size()%2 == 0 )
	{
		if( demc > deml ) cout << "YES" ;
		else cout << "NO" ;
	}
	else
	{
		if( deml > demc ) cout << "YES";
		else cout <<"NO";
	}
	cout << '\n' ;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t ;
    cin >> t;
    cin.ignore() ;
    while( t-- )
	{
        solve();
    }
} 
