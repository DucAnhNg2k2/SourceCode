#include<bits/stdc++.h>
using namespace std;
int a[30] , n , X  ;
vector<vector<int> > s;
vector<int> v;
void Try(int i,int sum,vector<int> v)
{
	if( sum >= X)
	{
		if( sum == X )
		{
			s.push_back(v);
		}
		return ;
	}
	for(int j = i ; j <= n ; j++ )
	{
		if( sum + a[j] <= X )
		{
			v.push_back(a[j]);
			Try(j,sum+a[j],v);
			v.pop_back();
		}
	}
}

void solve()
{
	s.clear(); v.clear();
	cin >> n >> X;
	for(int i = 1 ; i <= n ; i++ )
	{
		cin >> a[i];
	}
	sort(a+1,a+1+n);
	 Try(1,0,v);
	 if( s.size() == 0 )
	 {
	 	cout << -1 << endl;
	 }
	 else
	 {
	 	cout << s.size() << ' ';
	 	for(int i = 0 ; i < s.size() ; i++ )
	 	{	
	 		cout << '{' ;
	 		for(int j = 0 ; j < s[i].size()-1 ; j++ )
	 		{
	 			cout << s[i][j] << ' ';
	 		}
	 		cout << s[i][s[i].size()-1] << "} ";	 	
		}
	 	cout << '\n';
	 }
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
