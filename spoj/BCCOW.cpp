#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(a,b) for(ll i = a ; i <= b ; ++i )
int n , mid , l , r , stop , v;
ll sum = 0 , a[100] , s[100] , Max = -1e18 ;
 
void merge(ll a[],int l,int m,int r)
{
	int n1 = m - l + 1, n2 = r - m ;
	ll L[n1] , R[n2] ;
	for(int i = 0 ; i < n1 ; i++ )
	{
		L[i] = a[l+i]; 
	}
	for(int i = 0 ; i < n2 ; i++ )
	{
		R[i] = a[m+i+1];
	}
	int i = 0 , j = 0 , pos = l ;
	while( i < n1 && j < n2 )
	{
		if( L[i] < R[j] )
		{
			a[pos] = L[i]; i++; pos++;
		}
		else
		{
			a[pos] = R[j] ; j++; pos++;
		}
	}
	while( i < n1 )
	{
		a[pos] = L[i];
		i++;
		pos++;
	}
	while( j < n2 )
	{
		a[pos] = R[j];
		pos++;
		j++;
	}
}
void MergeSort(ll a[],int l,int r)
{
	if( l < r )
	{
		int m = (l+r)/2;
		MergeSort(a,l,m);
		MergeSort(a,m+1,r);
		merge(a,l,m,r);
	}
}
 
void KhoiTao()
{
	FOR(l,r) a[i] = 0 ;
}
 
void Sinh()
{
	int i = r ;
	while( a[i] == 1 && i >= l )
	{
		a[i] = 0;
		i--;
	}
	if( i == l-1 ) stop = 0 ;
	else a[i] = 1;
}
 
void Xuat(ll s1[],int &pos)
{	ll Sum = 0 ;
	FOR(l,r)
	{
		if( a[i] ) Sum += s[i] ;
	}
	if( Sum <= v )
	{
		if( Max < Sum ) Max = Sum ;
		s1[pos] = Sum ;
		pos++;
	}
}
 
void Solve(ll s1[],int &pos)
{
	stop = 1 ;
	KhoiTao() ;
	while( stop )
	{
		Xuat(s1,pos);
		Sinh();
	}
}
void resetArr(ll s1[],ll pos1,ll p1[],int &o1)
{
	MergeSort(s1,0,pos1-1);
	ll res = -1e18 ;
	for(int i = 0 ; i < pos1 ; i++ )
	{
		if( res != s1[i] )
		{	res = s1[i];
			p1[o1] = res;
			o1++;
		}
		else
		{
			while( res == s1[i] ) i++;
			i--;
		}
	}
}
ll s1[10000] , s2[10000] ;
ll p1[10000] , p2[10000] ;
int pos1 = 0 , pos2 = 0 , o1 = 0 ,o2 = 0;
int main()
{
	ios_base::sync_with_stdio(false);
	scanf("%d %d",&v,&n);
	FOR(1,n)
	{
		scanf("%lld",&s[i]);
		sum += s[i];
	}
	for(int i = n ; i >= 1 ; i-- )
	{
		if( a[i] <= v )
		{
			n = i;
			break;
		}
	}
 	mid = n/2;
 	l = 1 ; r = mid ; Solve(s1,pos1); resetArr(s1,pos1,p1,o1);
 	l = mid+1 ; r = n ; Solve(s2,pos2);	resetArr(s2,pos2,p2,o2);
	for(int i = 0 ; i < o1 ; i++ )
	{
		for(int j = 0 ; j < o2 ; j++ )
		{
			ll tmp = p1[i] + p2[j] ;
			if( tmp <= v && Max < tmp ) Max = tmp; 
		}
	}
	printf("%lld",Max);
} 
