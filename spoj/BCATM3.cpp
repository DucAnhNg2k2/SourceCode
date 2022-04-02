#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#define mod 1000000007
using namespace std;
typedef long long ll;
void solve()
{
	int x ;
	cin >> x;
	int dem1 = x/500;
	x -= dem1*500;
	int dem2 = x/200;
	x -= dem2*200;
	int dem3 = x/100;
	x -= dem3*100;
	int dem4 = x/50;
	x -= dem4*50;
	int dem5 = x/20;
	x -= dem5*20;
	int dem6 = x/10;
	x -= dem6*10;
	int dem7 = x/5;
	x -= dem7*5;
	int dem8 = x/2;
	x -= dem8*2;
	cout << dem1 + dem2 + dem3 + dem4 + dem5 + dem6 + dem7 + dem8 + x << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while( t-- )
	{
    	solve();
	}
} 
