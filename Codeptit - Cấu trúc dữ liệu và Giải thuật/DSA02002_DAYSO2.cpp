#include<bits/stdc++.h>
using namespace std;
 
void solve()
{	
	int n;
	cin >> n;
	long long a[100][100] ;
	vector<string> v;
	for(int i = 1 ; i <= n ; ++i ) cin >> a[1][i] ;
	int end = n-1 ;
	for(int i = 2 ; i <= n ; ++i )
	{
		for(int j = 1 ; j <= end ; ++j )
		{
			a[i][j] = a[i-1][j] + a[i-1][j+1] ;
		}
		end--;
	}
	end = n;
	for(int i = 1 ; i <= n ; ++i )
	{
		string res = "[";
		int j;
		for(j = 1 ; j < end ; ++j )
		{
			res += to_string(a[i][j]);
			res += " ";
		}
		res = res + to_string(a[i][j]) + ']';
		end--;
		v.push_back(res);
	}
	for(int i = v.size()-1 ; i >= 0 ; i-- ) {
		cout << v[i] << ' ';
	}
	cout << endl;
}
 
int main()
{
	ios_base::sync_with_stdio(false); 
	int t;
	cin >> t;
	while( t-- )
	{
		solve();
	}
}

