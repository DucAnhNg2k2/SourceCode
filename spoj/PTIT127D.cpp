// main
#include<bits/stdc++.h>
using namespace std;
 

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	long long m,n,sum = 0;
	cin >> m >> n;
	long long a[n+5];
	for(int i = 1 ; i <= n ; i++ )
	{
		cin >> a[i];
		sum += a[i];
	}
	sort(a+1,a+1+n);
	long long res = sum-m , size = n , ans = 0;
	for(int i = 1 ; i <= n ; i++ )
	{
		if( a[i]*size <= res )
		{
			size--;
			res -= a[i];
			ans += a[i]*a[i];
		}
		else break;
	}
	long long sum1 = res/size , sum2 = sum1+1;
	long long so2 = res%size , so1 = size-so2;
	cout << so1*sum1*sum1 + so2*sum2*sum2 + ans;
}
