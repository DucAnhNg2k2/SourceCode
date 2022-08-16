#include<iostream>
#include<vector>
using namespace std;
const long long mod = 1e9+7;
vector<vector<long long>> MaTrix(vector<vector<long long>>a ,vector<vector<long long>> b)
{
	vector<vector<long long> > temp(2,vector<long long>(2));
	for(int i = 0 ; i < 2 ; ++i )
	{
		for(int j = 0 ; j < 2 ; ++j)
		{
			long long res = 0 ;
			for(int k = 0 ; k < 2 ; ++k )
			{
				res += (a[i][k]*b[k][j])%mod;
				res %= mod;
			}
			temp[i][j] = res;
		}
	}
	return temp;
}
vector<vector<long long>> Power(vector<vector<long long>> v,long long k)
{
	if( k <= 1 ) return v;
	else
	{	vector<vector<long long> > p = Power(v,k/2);
		if( k%2 == 0 ) return MaTrix(p,p);
		else return MaTrix(v,MaTrix(p,p));
	}
}
int main()
{	
	int t;
	cin >> t;
	while( t-- )
	{
		long long n;
		cin >> n ;
		vector<vector<long long>> a(2,vector<long long>(2));
		a[0][0] = 1;
		a[1][0] = 1;
		a[0][1] = 1;
		a[1][1] = 0;
		a = Power(a,n-1);
		cout << a[0][0] << '\n';
	}
}
