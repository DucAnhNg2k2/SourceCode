#include<bits/stdc++.h>
using namespace std;
long long a[20] , Min = 1000 , chuaxet[20] = {0} , n , sum = 0 ;
string s[20];
// sinh hoán v�? 
void Try(int i)
{
	if( i > n ) return ;
	for(int j = 1 ; j <= n ; j++ )
	{
		if( !chuaxet[j] )
		{
			a[i] = j;
			chuaxet[j] = true ;
			int dex1 = a[i] , dex2 = a[i-1] , dem = 0 ;
			for(int t1 = 0 ; t1 < s[dex1].size() ; t1++ )
			{
				for(int t2 = 0 ; t2 < s[dex2].size() ; t2++ )
				{
					if( s[dex1][t1] == s[dex2][t2] ) dem++;
				}
			}
			sum += dem ;
			// xét thêm cận 
			if( sum < Min )
			{	
				if( i == n ) Min = sum ;
				else Try(i+1) ;
			}
			sum -= dem ;
			chuaxet[j] = false ;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cin >> n;
	for(int i = 1 ; i <= n ; i++ ) cin >> s[i] ;
	Try(1);
	cout << Min ;
}
 
