#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s ;
	getline(cin,s) ;
	stringstream ss ;
	ss << s ;
	vector<string> v ;
	while( ss >> s )
	{
		v.push_back(s) ;
	}
	for(int i = v.size()-1 ; i >= 0 ; i-- ) cout << v[i] << ' ';
	cout << '\n' ;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ; 
    cin >> t;
    cin.ignore();
	while( t-- )
	{
		solve() ;
	}
}

