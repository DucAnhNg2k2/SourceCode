#include<bits/stdc++.h>
using namespace std;
 
bool cmp(string a,string b)
{
	if( a+b > b+a ) return true ;
	return false ;
}
void solve()
{
	int n ;
	cin >> n;
	vector<string> a(n) ;
	for(int i = 0 ; i < n ; i++ )
	{
		cin >> a[i] ;
	}
	sort(a.begin(),a.end(),cmp);
	for(int i = 0 ; i < n ; i++ )
	{
		cout << a[i] ;
	}
	cout << '\n' ;
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t = 1;
    cin >> t;
    while( t-- )
	{
        solve();
    }
}  
