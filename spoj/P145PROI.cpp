// main
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int dem1 , dem2 , dem3 ;
	Node(int dem1,int dem2,int dem3)
	{
		this->dem1=dem1;
		this->dem2=dem2;
		this->dem3=dem3;
	}
};

bool check(int begin,int end,vector<Node> &v)
{
	if (
	   v[end].dem1 - v[begin-1].dem1 > 0 
	&& v[end].dem2 - v[begin-1].dem2 > 0 
	&& v[end].dem3 - v[begin-1].dem3 > 0 )
	return true;
	return false;
}

int Bin_search(vector<Node> &v,int &first)
{
	int l = first+5 , r = v.size()-1 , pos = -1;
	while( l <= r )
	{
		int m = (l+r)/2;
		if( check(first,m,v) == false )
		{
			l = m+1;
		}
		else
		{
			r = m-1;
			pos = m;
		}
	}
	return pos;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	string s;
	cin >> s;
	int n = s.size();
	s = ' ' + s;
	vector<Node> v(n+1,Node(0,0,0));
	int dem1 = 0 , dem2 = 0 , dem3 = 0;
	for(int i = 1 ; i <= n ; i++ )
	{
		if( s[i] >= 'A' && s[i] <= 'Z' ) dem1++;
		else if( s[i] >= 'a' && s[i] <= 'z' ) dem2++;
		else dem3++;
		v[i] = Node(dem1,dem2,dem3);
	}
	long long dem = 0;
	for(int i = 1 ; i <= n ; i++ )
	{
		int pos = Bin_search(v,i);
		if( pos != -1)
		dem += (s.size()-1-pos+1);
	}
	cout << dem ;
}
