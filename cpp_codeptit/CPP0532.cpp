#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

double S_triangle(double x1,double y1,double x2,double y2,double x3,double y3)
{
	double a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	double b = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	double c = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	double p = (a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
void solve()
{
	int n;
	cin >> n;
	vector<pair<double,double> > v(n);
	for(int i = 0 ; i < n ; i++ )
		cin >> v[i].first >>  v[i].second;	
	double ans = 0;
	for(int i = 1 ; i < n-1 ; i++ )
	{
		ans += S_triangle(v[0].first,v[0].second,v[i].first,v[i].second,v[i+1].first,v[i+1].second);
	}
	printf("%.3lf\n",ans);
}

int main() 
{
 //   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) 
       solve();
    return 0;
}


