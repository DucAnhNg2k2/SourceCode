#include<bits/stdc++.h>
using namespace std ;
 
struct P
{
	int timeX , timeD ;
	int h, ttX , ttD ; 
};
 
void Xuly(P &a,int &time)
{
	if( a.timeD > 0 )
	{
		if( a.timeD > time )
		{
			a.timeD -= time ;
			time = 0 ;
		}
		else
		{
			time -= a.timeD ;
			a.timeD = 0 ;
			a.timeX = a.ttX ;
		}
	}
	else
	{
		if( a.timeX > time )
		{
			a.timeX -= time ;
			time = 0 ;
		}
		else
		{
			time -= a.timeX ;
			a.timeX = 0 ;
			a.timeD = a.ttD ; 
		}
	}
}
int main()
{	
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n , l , x = 0 , tgian = 0 ;
	cin >> n >> l ;
	vector<P> a(n+5) ;
	for(int i = 1 ; i <= n ; i++ )
	{
		cin >> a[i].h >> a[i].ttD >> a[i].ttX ;
		a[i].timeD = a[i].ttD ;
		a[i].timeX = 0 ;
	}
	
	for(int i = 1 ; i <= n ; )
	{
		int h = a[i].h - x ;
		// dang o den giao thong  
		if( h == 0 )
		{ 	//  dang cho den do 
			if( a[i].timeD > 0 )
			{
				int Time = a[i].timeD ;
				a[i].timeD = 0 ;
				a[i].timeX = a[i].ttX ;
				tgian += Time ;
				for(int j = i + 1 ; j <= n ; j++ )
				{
					int time = Time ;
					while( time > 0 )
					{
						Xuly(a[j],time);
					}
				}
			}
			else
			{
				i++;
			}
		}
		else
		{
				x = a[i].h ;
				int Time = h ;
				tgian += Time ;
				for(int j = i  ; j <= n ; j++ )
				{
					int time = Time ;
					while( time > 0 )
					{
						Xuly(a[j],time);
					}
				}
		}
	}
	cout << tgian + (l-x) ;
}
 
