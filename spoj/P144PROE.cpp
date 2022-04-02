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
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int x,y,a,b;
	cin >> x >> y >> a >> b;
	int dem = 0 ;
	for(int i = 0 ; i <= x ; i++ ){
		for(int j = 0 ; j <= y ; j++ ){
			if( i >= a && j >= b && i > j) dem++;
		}
	}
	cout << dem << endl;
	for(int i = 0 ; i <= x ; i++ ){
		for(int j = 0 ; j <= y ; j++ ){
			if( i >= a && j >= b && i > j) cout << i << ' ' << j << endl;
		}
	}
} 
