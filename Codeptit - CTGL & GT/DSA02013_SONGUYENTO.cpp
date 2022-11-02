#pragma GCC optimize("O2")
#include <bits/stdc++.h>
//	#include"DucAnh.h"
using namespace std;
#define endl '\n'
 
template<class T> bool IsPrime(T n)
{
	if( n < 2 )
		return false;
	for(T i = 2 ; i <= sqrt(n) ; ++i )
		if( n%i == 0 )
			return false;
	return true;
}
 
int s,n,p,cnt = 0;
vector<int> v;
vector<vector<int>> res;
void Try(int i,int sum,int dem,vector<int> ans)
{
	if( sum == s && dem == n )
	{
		sort(ans.begin(),ans.end());
		res.push_back(ans);
		return;
	}
	if( i == v.size() || dem > n ) 
		return;
	if( sum + v[i] <= s )
	{
		ans.push_back(v[i]);
		Try(i+1,sum+v[i],dem+1,ans);
		ans.pop_back();
	} 
	Try(i+1,sum,dem,ans);
}
 
int main() 
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;
	cin >> t;
	while( t-- ) {
		cin >> n >> p >> s;
		for(int i = 0 ; i < res.size() ; i++ ) {
			res[i].clear();
		}
		res.clear();
		v.clear();
		for(int i = 2 ; i <= s ; i++ )
		{
			if( IsPrime(i) && i > p ) 
				v.push_back(i);
		}
		Try(0,0,0,vector<int>());
		
		cout << res.size() << endl;
		sort(res.begin(),res.end());
		for(auto i : res ) {
			for(auto j : i ) {
				cout << j << ' ';
			}
			cout << endl;
		}
	}
}
