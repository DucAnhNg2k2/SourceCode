#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
#define mod 1000000007
using namespace std;
typedef long long ll;
typedef double db;
void solve(int n)
{
	
}
ll Sum(int n){
	return n*(n+1)/2;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int dem = 0;
    int start = 1;
    while( n - Sum(start) >= 0 ){
    	n -= Sum(start);
    	start++;
    	dem++;
	}
	cout << dem ;
} 
