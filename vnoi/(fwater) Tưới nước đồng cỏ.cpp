#include <bits/stdc++.h>
#define LL long long 
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FO(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define debug cout << "YES" << endl
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

int n;
LL arr[500][500];
LL a[500];
bool vs[500] = {};

struct Node {
	int dist;
	LL u_dist;
	Node(int dist,LL u_dist) {
		this->dist = dist;
		this->u_dist = u_dist;
	}	
};

struct cmp {
	bool operator()(Node a,Node b) {
		return a.u_dist > b.u_dist;
	}
};

void bfs() {
	priority_queue<Node,vector<Node>,cmp> q;
	FOR(i,1,n) {
		q.push(Node(i,a[i]));
	}
	while( !q.empty() ) {
		Node top = q.top();
		q.pop();
		if( vs[top.dist] ) continue;
		vs[top.dist] = true;
		FOR(i,1,n) {
			if(vs[i]) continue; 
			if( a[i] > arr[top.dist][i] ) {
				a[i] = arr[top.dist][i];
				q.push(Node(i,a[i]));
			}
		}
	}
	LL sum = 0;
	FOR(i,1,n) {
		sum += a[i];
	}
	cout << sum << endl;
}

void solve() {
	cin >> n;
	FOR(i,1,n) {
		cin >> a[i];
	}	
	FOR(i,1,n) {
		FOR(j,1,n) {
			cin >> arr[i][j];
		}
	}
	bfs();
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
