#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<stdio.h>
#define mod 1000000007
using namespace std;
typedef long long ll;
typedef double db;
struct Point{
	db x;
	db y;
	db m;
};
int cs = 1;
void solve(int n)
{
	n;
	Point p[n];
	for(int i = 0 ; i < n ; i++ ) cin >> p[i].x >> p[i].y >> p[i].m;
	// tim a
	db a;
	db sum1 = 0;
	db sum2 = 0;
	for(int i = 0 ; i < n ; i++ ){
		sum1 += p[i].m*p[i].x;
		sum2 += p[i].m;
	}
	a = sum1 / sum2;
	// tim b
	db b;
	sum1 = 0 ;
	sum2 = 0 ;
	for(int i = 0 ; i < n ; i++ ){
		sum1 += p[i].m*p[i].y;
		sum2 += p[i].m;
	}
	b = sum1 / sum2;
	printf("Case %d: %.2lf %.2lf\n",cs,a,b);
	cs++;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while( true )
	{	cin >> n;
		if ( n < 0 ) break;
    	solve(n);
	}
} 
