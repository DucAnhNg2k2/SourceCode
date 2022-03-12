#include<bits/stdc++.h>
using namespace std;

void solve()
{
	double x1,y1,x2,y2;
	cin >> x1 >> y1 >> x2 >> y2 ;
	double s = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	printf("%.4lf\n",s);
}
int main()
{  
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while( t-- )
	{
		solve();
	}
}
