#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
using namespace std;
typedef long long ll;
typedef double db;
struct ThiSinh{
	ll point;
	ll dem1;
	ll dem2;
	ll dem3;
	ll SBD;
};
bool cmp(ThiSinh a,ThiSinh b){
	if( a.point < b.point ) return true;
	if( a.point == b.point ){
		if( a.dem1 < b.dem1 ) return true;
		if( a.dem1 == b.dem1 ){
			if( a.dem2 < b.dem2 ) return true;
		}
	}
	return false;
}
bool BangNhau(ThiSinh a,ThiSinh b){
	if( a.point == b.point && a.dem1 == b.dem1 && a.dem2 == b.dem2 ) return true;
	else return false;
}
ThiSinh Ts[1000001] ;
void solve(int n){
	ThiSinh max[1000] ;
	FOR(0,1000001){
		Ts[i].point = 0;
		Ts[i].dem1 = 0 ;
		Ts[i].dem2 = 0;
		Ts[i].dem3 = 0;
	}
	FOR(0,1000){
		max[i].point = 0 ;
		max[i].dem1 = 0;
		max[i].dem2 = 0;
		max[i].dem3 =0;
	}
	int size = 0;
	FORR(k,0,n){
		int a;
		cin >> a;
		FORR(j,1,a+1){
			int x;
			cin >> x;
			if( j == 1 ){
				Ts[x].point += 3;
				Ts[x].dem1++;
			}
			if( j == 2){
				Ts[x].point += 2;
				Ts[x].dem2++;
			}
			if( j == 3 ){
				Ts[x].point += 1;
				Ts[x].dem3++;
			}
		}
	}
	FOR(0,1e6){
		if ( BangNhau(max[size],Ts[i])){
			size++;
			max[size] = Ts[i];
			max[size].SBD = i;
		}
		if( cmp(max[size],Ts[i]) ){
			size = 0 ;
			max[size] = Ts[i];
			max[size].SBD = i;
		}
	}
	FOR(0,size+1){
		cout << max[i].SBD << ' ';
	}
	cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(true){
    	int n;
    	cin >> n;
    	if( n== 0 ) break;
    	solve(n);
	}
}  
