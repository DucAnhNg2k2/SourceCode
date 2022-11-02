#include<iostream>
#include<vector>
using namespace std;
const long long mod = 1e9+7;
int n ; long long k;

vector<vector<long long> > MaTrix(vector<vector<long long> >a ,vector<vector<long long> > b)
{
	vector<vector<long long> > temp(n,vector<long long>(n));
	for(int i = 0 ; i < n ; ++i )
	{
		for(int j = 0 ; j < n ; ++j)
		{
			long long res = 0 ;
			for(int k = 0 ; k < n ; ++k )
			{
				res += (a[i][k]*b[k][j])%mod;
				res %= mod;
			}
			temp[i][j] = res;
		}
	}
	return temp;
}
vector<vector<long long> > Power(vector<vector<long long> > v,long long k)
{
	if( k <= 1 ) return v;
	else
	{	vector<vector<long long> > p = Power(v,k/2);
		if( k%2 == 0 ) return MaTrix(p,p);
		else return MaTrix(v,MaTrix(p,p));
	}
}
void solve()
{	cin >> n >> k ;
	vector<vector<long long> > v(n,vector<long long>(n)); 
	for(int i = 0 ; i < n ; i++ ) for(int j = 0 ; j < n ; j++ ) cin >> v[i][j] ;
	v = Power(v,k);
	long long s = 0;
	// for(int i = 0 ; i < n ; i++ )
	// {
		for(int j = 0; j < n; j++)
		{
		//	cout << v[j][j] << ' ';
			s +=  v[j][n-1] ;
			s %= mod;
		}
		cout << s << endl;
	//}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while( t--)
	{
		solve();
	}
}