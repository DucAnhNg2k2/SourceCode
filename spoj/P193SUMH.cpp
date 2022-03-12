#include<bits/stdc++.h>
using namespace std;

int n,m,s[1000005];
void BFS() {
	queue<pair<int,int> > q;
	q.push(make_pair(n,0));
	while( !q.empty() ) {
		pair<int,int> top = q.front();
		q.pop();
		if( top.first == m ) {
			cout << top.second;
			break;
		}
		if( top.first-1 >= 1 && s[top.first-1] > top.second+1 ) {
			q.push(make_pair(top.first-1,top.second+1));
			s[top.first-1] = top.second+1;
		}
		if( top.first*2 < 1000005 && s[top.first*2] > top.second+1 ) {
			q.push(make_pair(top.first*2,top.second+1));
			s[top.first*2] = top.second+1;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
//	freopen("TEST.txt","r",stdin);
	cin >> n >> m;
	for(int i = 1 ; i <= 1000000 ; i++ ) {
		s[i] = 10000000;
 	}
 	BFS();
}
