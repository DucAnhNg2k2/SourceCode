#include<bits/stdc++.h>
using namespace std;
int XuLy(string s,int k)
{
	int dd[300] = {0} , n = s.size() , dem = 0 , count = 0 ;
	for(int i = 0 ; i < s.size() ; i++ )
	{
		dd[s[i]]++;
	}
	for(int i = 0 ; i < 300 ; i++ ) 
		if( dd[i] ) 
			dem++;
	while( n )
	{
		if( dem == k )
		{
			count++ ;
		}
		dd[s[n-1]]--;
		if( dd[s[n-1]] == 0 ) dem--;
		n--;
	}
	return count;
}
void solve()
{
	string s , res = "" ; int k;
	cin >> s >> k ;
	int count = 0 ;
	for(int i = s.size()-1 ; i >= 0 ; i-- )
	{
		res = s[i] + res ;
		count += XuLy(res,k);
	}
	cout << count << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
}
