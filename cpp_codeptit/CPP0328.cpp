#include<iostream>
using namespace std;
namespace DucAnh_DepTrai
{

	int dem ;
	void ModString(string res)
	{
		long long sum = 0 , n = res.size() ;
		for(int i = 0 ; i < n ; i++) sum += (int)(res[i]-'0');
		while( n > 0 )
		{
			if( sum%3 != 0 )
			{
				long long s ;
				if( n >= 3 )
				{
					s = (int)(res[n-3]-'0')*100 + (int)(res[n-2]-'0')*10 + (int)(res[n-1]);
				}
				else if( n == 2 )
				{
					s = (int)(res[n-2]-'0')*10 + (int)(res[n-1]);
				}
				else
				{
					s = (int)(res[n-1]);
				}
				if( s%8 == 0 ) dem++;
			}
			sum -= (int)(res[n-1]-'0');
			res.erase(n-1,1);
			n--;
		}
	}
	void solve()
	{
		dem = 0 ;
		string s , res = "";
		cin >> s;
		for(int i = s.size()-1 ; i >= 0 ; i-- )
		{
			res = s[i] + res ;
			ModString(res);
		}
		cout << dem << endl ;
	}
}
int main()
{
	int t;		
	cin >> t;
	while( t-- )
	{
		DucAnh_DepTrai::solve() ;
	}
}

