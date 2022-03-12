#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 ; 
int n ;
int a[N+5] = {0};
int st[4 * N+5] = {0};

void update(int id,int l,int r,int pos) {
	if( r < pos || pos < l ) 
		return ;
	if( l == r ) {
		st[id] += 1 ;
		return ;
	}
	int mid = (l+r)/2;
	update(id*2,l,mid,pos);
	update(id*2+1,mid+1,r,pos);
	st[id] = st[id*2] + st[id*2+1];
}

int getSum(int id,int l,int r,int u,int v) {
	if( v < l || r < u ) 
		return 0;
	if( u <= l && r <= v ) {
		return st[id];
	}
	int mid = (l+r)/2;
	return getSum(id*2,l,mid,u,v) + getSum(id*2+1,mid+1,r,u,v);
}

int main() {
	cin >> n;
	long long dem = 0;
	for(int i = 1 ; i <= n ; i++ ) 
		cin >> a[i];
	for(int i = n ; i >= 1 ; i-- ) {
		dem += getSum(1,1,N,1,a[i]-1);
		update(1,1,N,a[i]);
	}
	cout << dem ;
}

