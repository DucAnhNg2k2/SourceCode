#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#define FOR(a,b) for(int i = a ; i < b ; i++ )
#define mod 1000000007
using namespace std;
typedef long long ll;
typedef double db;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    ll a[n];
    FOR(0,n) cin >> a[i];
    int dem = 0 ;
    for(int i = 0,j = n-1 ; i < n , j >= 0 ;){
    	if( i >= j ) break;
    	if( a[i] == a[j] ){
    		i++;
    		j--;
		}
		if( a[i] < a[j] ){
			i++;
			a[i] = a[i] + a[i-1];
			dem++;
		}
		if( a[i] > a[j] ){
			j--;
			a[j] = a[j] + a[j+1];
			dem++;
		}
	}
	cout << dem ;
}  
