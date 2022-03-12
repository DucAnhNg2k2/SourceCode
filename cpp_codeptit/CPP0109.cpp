#include<iostream>
#include<vector>
using namespace std;

int n , dem = 0 ;
void Try(long long sum,int chan,int le)
{
	if( chan == le && le == n/2 ) 
	{
		cout << sum << ' ' ;
		dem++;
		if( dem == 10 )
		{
			cout << '\n' ;
			dem = 0 ;
		}
	}
	if( chan > n/2 || le > n/2 ) return ;
	for(int i = 0 ; i <= 9 ; i++ )
	{
		if( i%2 == 1 ) Try(sum*10+i,chan,le+1);
		else Try(sum*10+i,chan+1,le);
	}
}
int main()
{  
	cin >> n ;
	for(int i = 1 ; i <= 9 ; i++ )
		if( i&1 ) Try(i,0,1);
		else Try(i,1,0);
}
