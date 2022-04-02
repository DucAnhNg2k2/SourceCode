#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<queue>
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
using namespace std;
typedef long long ll;
typedef double db;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll l , r;
    cin >> l >> r;
   	queue<ll> q;
   	q.push(4);
   	q.push(7);
   	vector<ll> v;
   	while(1){
   		ll k = q.front();
   		v.push_back(k);
   		q.pop();
   		ll s1 = k*10 + 4;
		q.push(s1);
		if( s1 >= r ) break;
		ll s2 = k*10 + 7;
		q.push(s2);
		if( s2 >= r ) break;
	}
	while( !q.empty() ){
		v.push_back( q.front() );
		q.pop();
	}
//	FOR(0,v.size()){
//		cout << v[i] << ' ';
//	}
		ll start = l;
		ll sum = 0 ;
		ll cs;
	if( r <= 4 ){
		FOR(l,r+1){
			sum += 4;
		}
		cout << sum << endl;
		return 0;
	}
	if( r <= 7 ){
		FOR(l,r+1){
			if( i <= 4 ) sum += 4;
			else sum += 7;
		}
		cout << sum << endl;
		return 0;
	}
	FOR(0,v.size()-1 ){
		if( v[i] < l ) continue;
		else
		{
			cs = v[i] - start + 1;
			sum += cs*v[i];
			start = v[i] + 1;
		}
	}
	cs = r - start + 1;
	sum += cs*v[v.size()-1];
	cout << sum ;
}  
