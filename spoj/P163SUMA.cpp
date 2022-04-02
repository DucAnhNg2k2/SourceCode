#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
int main()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll> dd(127, 0);
    for (int i = 0; i < n; i++)
    {
        dd[s[i]]++;
    }
 
    sort(dd.rbegin(), dd.rend());
    long long sum = 0;
    for (ll i = 0; i < 127; i++)
    {
        if (k - dd[i] <= 0)
        {
            sum += k*k;
            break;
        }
        sum += dd[i]*dd[i];
        k -= dd[i];
    }
    cout << sum;
    return 0;
}  
