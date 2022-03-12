#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef unsigned long long ull;
typedef vector<long long> vll;
typedef vector<int> vi;

#define mp make_pair 
#define pb push_back
#define endl '\n'
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define min(a,b) ((a) < (b) ? (a) : (b))
#define max(a,b) ((a) > (b) ? (a) : (b))
#define sz(x) (int)(x.size())
#define FOR(i,l,r) for(int i=l;i<=r;++i)
#define FOD(i,l,r) for(int i=r;i>=l;--i)

const long long MOD = 1000000007LL;
template<class T> bool IsPrime(T n)
{
	if( n < 2 )
		return false;
	for(T i = 2 ; i <= sqrt(n) ; ++i )
		if( n%i == 0 )
			return false;
	return true;
}

bool checkPrime(int n) {
    while( n > 0 ) {
        if( IsPrime(n) == false ) 
            return false;
        n /= 10;
    }
    return true;
}
int main() {
	int n;
    cin >> n;
    vll v;
    FOR(i,1,n) {
        if( checkPrime(i) ) 
        v.push_back(i);   
    }
    if( v.size() == 0 ) cout << -1 ;
    else FOR(i,0,v.size()-1) cout << v[i] << ' ';
}



