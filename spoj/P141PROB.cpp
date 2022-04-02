// FORM 
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a,b) for(ll i = a ; i < b ; i++ )
#define FORR(i,a,b) for(ll i = a ; i < b ; i++ )
const ll mod = 1e9+7;
char a[100][100];
int main()
{
   ios_base::sync_with_stdio(0);
//   	cin.tie(0);
   	FORR(i,0,100){
   		FORR(j,0,100){
   			a[i][j] = '.';
		}	
	}
	int r , s;
	cin >> r >> s;
	FORR(i,1,r+1){
		FORR(j,1,s+1){
			cin >> a[i][j];
		}
	}
	int x , y;
	int max = 0 ;
	bool ok = false ;
	FORR(i,1,r+1){
		FORR(j,1,s+1){
			if( a[i][j] == '.'){
				int dem = 0;
				if( a[i+1][j+1] == 'o') dem++;
				if( a[i+1][j] =='o') dem++;
				if( a[i+1][j-1] =='o') dem++;
				if( a[i][j+1] =='o') dem++;
				if( a[i][j-1] =='o') dem++;
				if( a[i-1][j+1]=='o') dem++;
				if( a[i-1][j] =='o') dem++;
				if( a[i-1][j-1]=='o') dem++;
				if( max < dem ){
					max = dem;
					x = i ;
					y = j ;
					ok = true;
				}
			}
		}
	}
	if( ok ) a[x][y] ='o';
//	FORR(i,1,r+1){
//		FORR(j,1,s+1){
//			cout << a[i][j] ;
//		}
//		cout << endl;
//	}
	int dem = 0 ;
	FORR(i,1,r+1){
		FORR(j,1,s+1){
			if( a[i][j] == 'o' ){
				if( a[i+1][j+1] =='o') dem++;
				if( a[i][j+1] =='o') dem++;
				if( a[i+1][j] =='o') dem++;
				if( a[i+1][j-1] =='o') dem++;
			}
		}
	}
	cout << dem ;
}       
