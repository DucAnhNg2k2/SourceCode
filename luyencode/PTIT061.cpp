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

ll to_ll(string s) {
	bool check = false;
	if( s[0] == '-' ) {
		s.erase(0,1);
		check = true;
	}
	ll res = 0;
	FOR(i,0,s.size()-1) {
		res = res*10 + (int)(s[i]-'0');
	}
	if( check ) return -res;
	return res;
}

int main() {
	int n;
    cin >> n;
    vector<string> v(n);
    FOR(i,0,n-1) {
        cin >> v[i];  
        if( v[i][0] == '-' ) {
        	v[i].erase(0,1);
        	sort(v[i].begin(),v[i].end());
        	if( v[i][0] == '0' ) {
        		for(int j = 0 ; j < v[i].size() ; j++ ) {
        			if( v[i][j] != v[i][0] ) {
        				swap(v[i][j],v[i][0]);
        				break;
					}
				}
			}
        	v[i] = '-' + v[i];
		}
		else {
			sort(v[i].begin(),v[i].end(),greater<char>());
		}		
    }
    vll a(n);
    FOR(i,0,n-1) {
    	a[i] = to_ll(v[i]);
	}
    sort(a.begin(),a.end(),greater<int>());
    FOR(i,0,n-1) {
        cout << a[i] << ' ';
    }
}



