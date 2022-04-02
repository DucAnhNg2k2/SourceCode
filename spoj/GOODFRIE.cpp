#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int,int> ii;
 
#define FOR(i,a,b) for(int i = a ; i <= b ; ++i )
#define std_sort(a,l,r) sort(a.begin()+l,a.begin()+l+r); 
#define pb push_back
#define mp make_pair
#define sz(x) (x).size()
 
vector<vector<int> > v(300005,vector<int>(25,0));
string s[300005];
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);
   int n,k;
   cin >> n >> k;
   
	FOR(i,1,n)
	{
		cin >> s[i];
		v[i] = v[i-1];
		v[i][s[i].size()]++;
	}
 
	ll cnt = 0;
	FOR(i,1,n)
	{
		cnt += v[max(i-1,0)][s[i].size()]-v[max(i-k-1,0)][s[i].size()];
	//	cout << v[max(i-1,0)][s[i].size()]-v[max(i-k-1,0)][s[i].size()] << endl;
	}
	cout << cnt ;
}
 
