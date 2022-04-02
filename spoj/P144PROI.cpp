#include <iostream>
using namespace std;
typedef long long ll;
struct Vector{
  ll s;
  ll e;
};
int main() {
	
	// your code here
	ll max = -1e9;
	ll min = 1e9;
    int n;
    cin >> n;
    Vector v[n];
    cin >> v[0].s >> v[0].e;
    ll start = v[0].s;
    ll end = v[0].e;
    if ( max < end ) max = end;
    if ( min > start ) min = start;
    int cs=0;
    for(int i=1 ; i< n; i++){
    	cin >> v[i].s >> v[i].e;
    	if( v[i].s <= start && v[i].e >= end ){
    		cs =i;
    		start = v[i].s;
    		end = v[i].e;
    	}
    	if ( max < v[i].e ) max = v[i].e;
    	if ( min > v[i].s ) min = v[i].s;
    }
    if( v[cs].s == min && v[cs].e == max ) cout<<cs+1;
    else cout << -1;
	return 0;
} 
