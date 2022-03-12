#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string s ;
	getline(cin,s);
	stringstream ss ;
	ss << s ;
	int dem = 0 ;
	while( ss >> s ) dem++;
	cout << dem << endl; 
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

