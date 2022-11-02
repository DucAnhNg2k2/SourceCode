#include<bits/stdc++.h>
using namespace std;

class Array
{
	private:
		long long a[10005] ;
		int n ;
	public:
		Array(int n)
		{
			this->n = n ;
		}
		void input()
		{
			for(int i = 1 ; i <= n ; i++ ) cin >> a[i] ;
		}
		void sort(int l,int r)
		{
			int i = l , j = r ;
			long long p = a[(i+j)/2] ;
			while( i <= j )
			{
				while( a[i] < p ) i++;
				while( a[j] > p ) j--;
				if( i <= j )
				{
					swap(a[i],a[j]);
					i++;
					j--;
				}
			}
			if( i < r ) sort(i,r);
			if( l < j ) sort(l,j);
		}
		void display()
		{
			int l = 1 , r = n ;
			while( l < r )
			{
				cout << a[r] << ' ' << a[l] << ' ' ;
				r--;
				l++;
			}
			if( l == r ) cout << a[l] ;
			cout << '\n' ;
		}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t , n ;
	cin >> t;
	while( t-- )
	{
		cin >> n ;
		Array a(n);
		a.input();
		a.sort(1,n);
		a.display();
	}
}


