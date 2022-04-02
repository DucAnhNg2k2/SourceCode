#include<bits/stdc++.h>
using namespace std;
long long k;
long long Nhan(long long a,long long b)
{
	if( b == 0 ) return 0ll;
	long long tmp = Nhan(a,b/2);
	if( b%2 == 0 ) return (tmp%k * 2%k)%k;
	else return ((tmp%k *2%k )%k + a%k)%k; 
}
long long power(long long n,long long m)
{
	if( m == 0 ) return 1;
	long long t = power(n,m/2);
	long long res = Nhan(t,t);
	if( m%2 == 0 ) return res%k;
	else return Nhan(res,n)%k;
}
int main()
{
	ios_base::sync_with_stdio(false); 
	long long n,m ;
	cin >> n >> m >> k;
	cout << power(n,m);
}
