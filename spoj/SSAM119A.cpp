#include<bits/stdc++.h>
using namespace std;

vector<long long> v;
void Init() {
	queue<long long> q;
	q.push(9);
	while( !q.empty() ) {
		long long top = q.front();
		q.pop();
		v.push_back(top);
		if( top*10 >= 1e18 ) 
			break;
		q.push(top*10);
		if( top*10 + 9 >= 1e18 )
			break;
		q.push(top*10+9);
	}
	while( !q.empty() ) {
		v.push_back(q.front());
		q.pop();
	}
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	Init();
	int t;
	cin >> t;
	while( t-- ) {
		int n;
		cin >> n;
		for(int i = 0 ; i < v.size() ; i++ ) {
			if( v[i]%n == 0 ) {
				cout << v[i] << endl;
				break;
			}
		}
	}
}
