#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#include<set>
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
   	int n , m ;
   	cin >> n >> m ;
   	char s[100][100];
   	FORR(i,1,n+1){
   		FORR(j,1,m+1){
   			cin >> s[i][j];
		}	
	}
	int h1,h2;
	int c1,c2;
	bool ok1 = false;
	bool ok2 = false;
	FORR(i,1,n+1){
		FORR(j,1,m+1){
			if( s[i][j] == 'B'){
				h1 = i;
				c1 = j;
				ok1 = true;
				break;	
			}
		}
		if( ok1 ) break;
	}
	for(int i = n ; i >=1 ; i-- ){
		for(int j = m ; j >=1 ; j-- ){
			if( s[i][j] == 'B'){
				h2 = i;
				c2 = j;
				ok2 = true;
				break;
			}
		}
		if( ok2 ) break;
	}
	cout << (h1+h2)/2 << ' ' << (c1+c2)/2;
} 
