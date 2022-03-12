#pragma GCC optimize("O2")
#include <bits/stdc++.h>
//	#include"DucAnh.h"
using namespace std;
#define endl '\n'
typedef long long ll;
 
const long long mod = 1e15+7;
 
 
long long Nhan(long long a,long long b)
{
	if( b == 0 ) return 0 ;
	if( b == 1 ) return a%mod ;
	long long temp = Nhan(a,b/2)%mod ;
	if( b%2 == 0 ) return (2*temp)%mod ;
	else return ( (2*temp)%mod + a%mod )%mod ;
}
 
struct Matrix {
	int size;
	vector<vector<long long>> matrix;
	Matrix(){}
	Matrix(int size) {
		this->size = size;
		matrix.resize(size+1,vector<long long>(size+1,0));
	}
	friend istream &operator >> (istream &input,Matrix &matrix)
	{
		for(int i = 1 ; i <= matrix.size ; i++ )
			for(int j = 1 ; j <= matrix.size ; j++ )
				input >> matrix.matrix[i][j];
		return input;
	}
	friend ostream &operator << (ostream &output,Matrix matrix) {
		for(int i = 1 ; i <= matrix.size ; ++i ) {
			for(int j = 1 ; j <= matrix.size ; j++ ) {
				output << matrix.matrix[i][j] << ' ';
			}
			output << endl;
		}
		return output;
	}
	friend Matrix operator + (Matrix matrix_a,Matrix matrix_b) {
		int size = matrix_a.size;
		Matrix sum(size);
		for(int i = 1 ; i <= size ; i++)
			for(int j = 1 ; j <= size ; j++ )
			{
				sum.matrix[i][j] = (matrix_a.matrix[i][j]%mod + matrix_b.matrix[i][j]%mod)%mod;
			}
		return sum;
	}
	friend Matrix operator * (Matrix matrix_a,Matrix matrix_b)
	{
		int size = matrix_a.size;
		Matrix s(size);
		for(int i = 1 ; i <= size ; i++)
			for(int j = 1 ; j <= size ; j++ )
			{
				long long sum = 0;
				for(int k = 1 ; k <= size ; k++ )
				{
					sum = ( sum%mod + (Nhan(matrix_a.matrix[i][k],matrix_b.matrix[k][j] ) ) ) %mod;
				}
				s.matrix[i][j] = sum;
			}
		return s;
	}
	friend Matrix PowMatrix(Matrix a,long long b)
	{
		if( b <= 1 ) return a;
		else 
		{
			Matrix tmp = PowMatrix(a,b/2);
			if( b&1 ) return a*tmp*tmp;
			else return tmp*tmp;
		}
	}
};
 
Matrix calculate(Matrix A,Matrix I,long long k)
{
	if( k == 1 )
		return A;
	else
	{
		Matrix tmp = calculate(A,I,k/2);
		if( k%2 == 0 )
		{
			return (I+PowMatrix(A,k/2))*tmp;
		}
		else
		{
			return (I+PowMatrix(A,k/2))*tmp + PowMatrix(A,k);
		}
	}
}
 
int main() 
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	long long T1 = 1 , T2 = 2 , T3 = 3;
	Matrix A(3),I(3);
	A.matrix[1][1] = 1 , A.matrix[1][2] = 1, A.matrix[1][3] = 1;
	A.matrix[2][1] = 1 , A.matrix[2][2] = 0, A.matrix[2][3] = 0;
	A.matrix[3][1] = 0 , A.matrix[3][2] = 1, A.matrix[3][3] = 0;
 
	I.matrix[1][1] = 1 , I.matrix[1][2] = 0, I.matrix[1][3] = 0;
	I.matrix[2][1] = 0 , I.matrix[2][2] = 1, I.matrix[2][3] = 0;
	I.matrix[3][1] = 0 , I.matrix[3][2] = 0, I.matrix[3][3] = 1;
 
	int t;
	cin >> t;
	while( t-- )
	{
		long long n;
		cin >> n;
		if( n == 1 ) cout << T1 << endl;
		else if ( n == 2 ) cout << T1 + T2 << endl;
		else if ( n == 3 ) cout << T1 + T2 + T3 << endl;
		else 
		{
			long long k = n-3;
			Matrix X = calculate(A,I,k);
			long long F = T1 + T2 + T3;
			F += X.matrix[1][1]*T3;
			F %= mod;
			F += X.matrix[1][2]*T2;
			F %= mod;
			F += X.matrix[1][3]*T1;
			F %= mod;
			cout << F << endl;
		}
	}
	
} 