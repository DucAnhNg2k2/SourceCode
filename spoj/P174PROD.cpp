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
   	ll n , m;
   	cin >> n >> m;
   	ll dem1[10] ={0};
   	ll dem2[10] ={0};
   	FOR(1,n+1){
   		dem1[i%10]++;	
	}
	FOR(1,m+1){
		dem2[i%10]++;
	}
	ll dem =  dem1[0]*(dem2[0]+dem2[5]) + dem1[1]*(dem2[4]+dem2[9]) + dem1[2]*(dem2[3]+dem2[8]) + dem1[3]*(dem2[2]+dem2[7]) + dem1[4]*(dem2[1]+dem2[6]) + dem1[5]*(dem2[0]+dem2[5])+dem1[6]*(dem2[4]+dem2[9])+dem1[7]*(dem2[8]+dem2[3])+dem1[8]*(dem2[2]+dem2[7])+dem1[9]*(dem2[6]+dem2[1]);
	cout << dem ;
} 
