#include <bits/stdc++.h>
//	#include"DucAnh.h"
using namespace std;
#define endl '\n'
#define size 5
typedef long long ll;
const long long mod = 1e15+7;

ll Nhan(long long a,long long b)
{
	if( b == 0 ) return 0 ;
	if( b == 1 ) return a%mod ;
	long long temp = Nhan(a,b/2)%mod ;
	if( b%2 == 0 ) return (2*temp)%mod ;
	else return ( (2*temp)%mod + a%mod )%mod ;
}

struct Matrix {
	ll matrix[5][5];
};

Matrix sum(Matrix matrix_a,Matrix matrix_b) {
	Matrix s;
	for(int i = 0 ; i < size ; i++)
		for(int j = 0 ; j < size ; j++ )
		{
			s.matrix[i][j] = (matrix_a.matrix[i][j]%mod + matrix_b.matrix[i][j]%mod)%mod;
		}
	return s;
}
	
Matrix mul(Matrix matrix_a,Matrix matrix_b)
{
	Matrix s;
	for(int i = 0 ; i < size ; i++)
		for(int j = 0 ; j < size ; j++ )
		{
			long long sum = 0;
			for(int k = 0 ; k < size ; k++ )
			{
				sum = ( sum%mod + (Nhan(matrix_a.matrix[i][k],matrix_b.matrix[k][j] ) ) ) %mod;
			}
			s.matrix[i][j] = sum;
		}
	return s;
}

Matrix PowMatrix(Matrix a,long long b)
{
	if( b <= 1 ) return a;
	else 
	{
		Matrix tmp = PowMatrix(a,b/2);
		if( b&1 ) return mul(a,mul(tmp,tmp));
		else return mul(tmp,tmp);
	}
}

Matrix A;
int main() 
{
	ios_base::sync_with_stdio(false);
	ll T1 = 1 ,T2 = 2 ,T3 = 3, F2 = 3;
	A.matrix[0][0] = 1 , A.matrix[0][1] = 1, A.matrix[0][2] = 0, A.matrix[0][3] = 0,
	A.matrix[1][0] = 0 , A.matrix[1][1] = 1, A.matrix[1][2] = 1, A.matrix[1][3] = 1,
 	A.matrix[2][0] = 0 , A.matrix[2][1] = 1, A.matrix[2][2] = 0; A.matrix[2][3] = 0,
	A.matrix[3][0] = 0 , A.matrix[3][1] = 0, A.matrix[3][2] = 1, A.matrix[3][3] = 0;
	int t;
	cin >> t;
	while( t-- )
	{
		long long n;
		cin >> n;
		if( n == 0 ) cout << 0 << endl;
		else if( n == 1 ) cout << T1 << endl;
		else if ( n == 2 ) cout << T1 + T2 << endl;
		else if ( n == 3 ) cout << T1 + T2 + T3 << endl;
		else 
		{
			long long k = n-2;
			Matrix X = PowMatrix(A,k);
			long long F = Nhan(X.matrix[0][0],F2);
			F = F + Nhan(X.matrix[0][1],T3);
			F = F + Nhan(X.matrix[0][2],T2);
			F = F + Nhan(X.matrix[0][3],T1);
			cout << F%mod << endl;
		}
	}
}

