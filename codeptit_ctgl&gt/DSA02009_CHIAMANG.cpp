#include<bits/stdc++.h>
using namespace std;

bool Try(vector<long long> a,vector<long long> arr,vector<bool> check,long s,int k,int n,int index,int limitdex)
{
	if( arr[index] == s )
	{
		if( index == k-2 ) return true;
		return Try(a,arr,check,s,k,n,index+1,n-1);
	}
	for(int i = limitdex ; i >= 0 ; i-- )
	{
		if( check[i] ) continue;
		int tmp = arr[index] + a[i] ;
		if( tmp <= s )
		{
			check[i] = true ;
			arr[index] += a[i] ;
			bool ntx = Try(a,arr,check,s,k,n,index,i-1);
			check[i] = false;
			arr[index] -= a[i] ;
			if(ntx) return true;
		}
	}
	return false ;
}

bool solve()
{
	int n , k ;
	cin >> n >> k ;
	vector<long long> a(n) ;
	vector<bool> check(n) ;
	vector<long long> arr(k) ;
	long s = 0 ;
	for(int i = 0 ; i < n ; i++ )
	{
		cin >> a[i] ; 
		check[i] = false ;
		s += a[i] ;
	}
	sort(a.begin(),a.end());
	if( k == 1 ) return true; 
	if( s%k !=0 ) return false;
	if( n < k ) return false;
	s /= k;
	arr[0] = a[n-1] ;
	check[n-1] = true ;
	return Try(a,arr,check,s,k,n,0,n-1);
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- )
	{
		if (solve() ) cout << 1 << endl;
		else cout << 0 << endl;
	}
}

