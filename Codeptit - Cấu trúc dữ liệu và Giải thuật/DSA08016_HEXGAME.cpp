#include<bits/stdc++.h>
using namespace std;

int stateRight1[11] = {0,4,1,3,8,5,2,7,9,6,10};
int stateRight2[11] = {0,1,5,2,4,9,6,3,8,10,7}; 
int stateLeft1[11] = {0,2,6,3,1,5,9,7,4,8,10};
int stateLeft2[11] = {0,1,3,7,4,2,6,10,8,5,9};
vector<string> rotateRight(string u) {
	u = ' ' + u;
	vector<string> ans(2,"");
	for(int i = 1 ; i <= 10 ; i++ )
	{
		ans[0] += u[stateRight1[i]];
		ans[1] += u[stateRight2[i]];
	}
	return ans;
}
vector<string> rotateLeft(string u) {
	u = ' ' + u;
	vector<string> ans(2,"");
	for(int i = 1 ; i <= 10 ; i++ )
	{
		ans[0] += u[stateLeft1[i]];
		ans[1] += u[stateLeft2[i]];
	}
	return ans;
}
struct Node{
	string s;
	int dem;
	Node(string s,int dem)
	{
		this->s = s;
		this->dem = dem;
	}
};

void solve() {
	int a[10];
	for(int i = 0 ; i < 10 ; i++ )
		cin >> a[i];
	string s = "" , first = "1238004765";
	for(int i = 0 ; i < 10 ; i++ )
		s += char(a[i]+'0');
		
	map<string,int> m1,m2;
	queue<Node> q1,q2;
	q1.push(Node(s,0));
	q2.push(Node(first,0));
	m1[s] = 0;
	m2[first] = 0;
 	while( !q1.empty() )
	{
		Node top = q1.front();
		q1.pop();
		if( top.dem == 16 ) break;
		if( top.s == first )
		{
			cout << top.dem << endl;
			return;
		}
		vector<string> tmp = rotateRight(top.s);
		if( m1.find(tmp[0]) == m1.end())
		{
			m1[tmp[0]] = top.dem+1;
			q1.push(Node(tmp[0],top.dem+1));
		}
		if( m1.find(tmp[1]) == m1.end()) 
		{
			m1[tmp[1]] = top.dem+1;
			q1.push(Node(tmp[1],top.dem+1));
		}
	}
	while( !q2.empty() ) 
	{
		Node top = q2.front();
		q2.pop();
		if( m1.find(top.s) != m1.end() ) 
		{
			cout << m1[top.s] + top.dem << endl;
			return 0;
		}
		vector<string> tmp = rotateLeft(top.s);
		if( m2.find(tmp[0]) == m2.end())
		{
			m2[tmp[0]] = top.dem+1;
			q2.push(Node(tmp[0],top.dem+1));
		}
		if( m2.find(tmp[1]) == m2.end()) 
		{
			m2[tmp[1]] = top.dem+1;
			q2.push(Node(tmp[1],top.dem+1));
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}
