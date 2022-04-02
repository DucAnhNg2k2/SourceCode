#include<bits/stdc++.h>
using namespace std;
struct Point{
	bool check ;
	long long x,y;
};
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	long long n , xo , yo , dem = 0 ;
	cin >> n >> xo >> yo;
	Point p[n] ;
	for(int i = 0 ; i < n ; i++ )
	{
		cin >> p[i].x >> p[i].y ; 
		p[i].check = false ;
	}
	for(int i = 0 ; i < n ; i++ )
	{
		if( !p[i].check )
		{
			dem++;
			long long x1 = xo - p[i].x , y1 = yo - p[i].y ;
			for(int j = i+1 ; j < n ; j++ )
			{
				if( !p[j].check )
				{
					long long x2 = xo - p[j].x , y2 = yo - p[j].y ;
					if( x1*y2 == y1*x2 ) p[j].check = true ;
				}
			}
		}
	}
	cout << dem ;
} 
 
