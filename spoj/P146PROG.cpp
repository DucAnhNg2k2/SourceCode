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
   	long n;
	cin >> n ;
	int tm[100005];
	for (long i=1; i<=n; i++)
	{
		cin>>tm[i];
	}
	if ( n == 1 )
	{
		cout<<"1 0";
		return 0;
	}
	long d1 = 0, d2 = 0 ;
	long i = 1;
	long j = n;
	while( i<=j && i <=n && j >= 1)
	{
		if ( tm[i] == tm[j] )
		{
			d1++;
			d2++;
			i++;
			j--;
			if ( i==j )
			{
				d1++;
				break;
			}
		}
		else if ( tm[i] < tm[j] )
		{
			tm[j] = tm[j]-tm[i];
			d1++;
			i++;
			if ( i==j )
			{
				d2++;
				break;
			}
		}
		else
		{
			tm[i] = tm[i]-tm[j];
			d2++;
			j--;
			if ( j==i )
			{
				d1++;
				break;
			}
		}
	}
	cout << d1 << " " << d2;
	return 0;
}  
