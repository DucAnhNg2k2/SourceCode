#include<bits/stdc++.h>
using namespace std;
int n , m , sum_max = 0 , kg = 0 , gt = 0 ; 
struct Gold
{
	double kg;
	double gt;
};
bool cmp(Gold a,Gold b)
{
	return (a.gt)/(a.kg) > (b.gt)/(b.kg) ;
}
Gold a[1000];
void Try(int i)
{
	for(int j = 0 ; j <= 1 ; j++ )
	{
		if( j )
		{
			kg += a[i].kg ;
			gt += a[i].gt ;
		}
		if( kg <= m  )
		{
			if( sum_max <= gt ) sum_max = gt ;
			if( i < n )
			{
				if( gt + (m-kg)*(a[i+1].gt)/(a[i+1].kg) > sum_max ) Try(i+1);
			}
		}
		if( j )
		{
			kg -= a[i].kg ;
			gt -= a[i].gt ;
		}	
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin >> n >> m ;
	for(int i = 1 ; i <= n ; i++ ) cin >> a[i].kg >> a[i].gt ;
	sort(a+1,a+1+n,cmp);
	Try(1);
	cout << sum_max ;
}
/*
3 4
1 4
2 5
3 6
*/ 
