#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin >> s;
	long long dem = s.size() ; 
	int dd[150] = {0} ;
	for(int i = 0 ; i < s.size() ; i++ )
	{
		dd[s[i]]++;
	}
	for(int i = 'a' ; i <= 'z' ; i++ )
	{
		int n = dd[i] ;
		dem += n*(n-1)/2;
	}
	cout << dem << endl;
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

