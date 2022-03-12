#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long a , x , y;
    cin >> a >> x >> y;
    for(int i = 1 ; i<= __gcd(x,y) ; i++ ) cout << a ;
    cout << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin >> t;
    while( t-- )
	{
        solve();
    }
} 
