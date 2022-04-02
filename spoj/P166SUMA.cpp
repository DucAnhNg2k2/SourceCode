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
    bool b[5005] = {false};
   	int n;
   	cin >> n;
   	int a[n];
   	FOR(0,n){
   		cin >> a[i];
		b[a[i]] = true;	
	}
	int dem = 0 ;
	FOR(1,n+1){
		if( b[i] == false ) dem++;
	}
	cout << dem ;
} 
