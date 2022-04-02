#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(ll a,ll b,ll c, ll d){
	if( a== b && a == c && a== d ) return true;
	else return false;
}
void solve(ll a,ll b ,ll c ,ll d){
	int dem = 0;
	while( check(a,b,c,d) == false ){
		int luuA = a;
		a = abs(a-b);
		b = abs(b-c);
		c = abs(c-d);
		d = abs(d-luuA);
		dem++;
	}
	cout << dem << endl;
}
int main(){
	ll a,b,c,d;
	while(true){
		cin >> a >> b >> c >> d;
		if( a== 0 && b == 0 && c== 0 && d == 0 ) return 0;
		solve(a,b,c,d);
	}
}
 
