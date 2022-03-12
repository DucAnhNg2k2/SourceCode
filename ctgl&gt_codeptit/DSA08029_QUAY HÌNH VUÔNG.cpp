#include<bits/stdc++.h>
using namespace std;

struct Point {
	int arr[7] ;
};
 
bool sosanh(Point &a,Point &b) {
	for(int i = 1 ; i <= 6 ; i++ ) {
		if( a.arr[i] != b.arr[i] ) return false;
	}
	return true ;
}
 
int dem(int k) {
	if( k == 1 ) return 1;
	int dau = 2 , cuoi = 3 , demm = 2 ;
	while( true ) {
		if( dau <= k && k <= cuoi ) return demm;
		dau = dau*2 ;
		cuoi = cuoi*2 + 1 ;
		demm++;
	}
}

void solve()
{
	Point a,b;
	cin >> a.arr[1] >> a.arr[2] >> a.arr[3] >> a.arr[4] >> a.arr[5] >> a.arr[6] ;
	cin >> b.arr[1] >> b.arr[2] >> b.arr[3] >> b.arr[4] >> b.arr[5] >> b.arr[6] ;
	queue<Point> q;
	q.push(a);
	int cnt = 1;
	while( !q.empty() )	
	{
		Point top = q.front() , temp1 , temp2 ;
		q.pop();
		if( sosanh(top,b) )
		{
			cout << dem(cnt)-1 << endl;
			return ;
		}
		temp1.arr[1] = top.arr[4] , temp1.arr[2] = top.arr[1] , temp1.arr[3] = top.arr[3] , temp1.arr[4] = top.arr[5] , temp1.arr[5] = top.arr[2] , temp1.arr[6] = top.arr[6];
		temp2.arr[1] = top.arr[1] , temp2.arr[2] = top.arr[5] , temp2.arr[3] = top.arr[2] , temp2.arr[4] = top.arr[4] , temp2.arr[5] = top.arr[6] , temp2.arr[6] = top.arr[3];
		q.push(temp1);
		q.push(temp2);
		cnt++;	
	}
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin >> t;
    while( t-- )
    solve();
}
