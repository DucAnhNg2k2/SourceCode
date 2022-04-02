#include <bits/stdc++.h> 
using namespace std; 
 
long long a[10000005] , l[10000005] , r[10000005] ;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- )
	{
		int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++ ) 
		cin >> a[i] ;
	stack<long long> st ;
	for(int i = 0 ; i < n ; i++ )
	{
		while( !st.empty() && a[i] <= a[st.top()] ) st.pop() ;
		if( st.empty() ) l[i] = 0 ;
		else l[i] = st.top() + 1 ;
		st.push(i) ;
	}
	while( !st.empty() ) st.pop() ;
	for(int i = n-1 ; i >= 0 ; i-- )
	{
		while( !st.empty() && a[i] <= a[st.top()] ) st.pop() ;
		if( st.empty() ) r[i] = n-1;
		else r[i] = st.top()-1;
		st.push(i) ;
	}
	long long max = -1e10 ;
	for(int i = 0 ; i < n ; i++ )
	{
		if( max < (r[i]-l[i]+1)*a[i] ) max = (r[i]-l[i]+1)*a[i];
	}
	cout << max << endl; 
	}
	
}  
