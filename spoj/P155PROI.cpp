#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define FORR(i,a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
using namespace std;
typedef long long ll;
typedef double db;
struct Bia{
	int hang;
	int khac;
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  	int n;
  	cin >> n;
  	int a[n], b[n];
  	FOR(0,n) cin >> a[i] >> b[i];
  	int dem = 0 ;
  	FORR(i,0,n){
  		int ok = 0 ;
  		FORR(j,0,n){
  			if( i!=j && b[j] == a[i] ) ok = 1;
		  }
		if( ok == 0 ) dem++;
	  }
	  cout << dem;
} 
