#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<list>
#define LL long long 
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FO(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define all(x) x.begin(),x.end()
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define debug cout << "YES" << endl
using namespace std;

typedef vector<LL> vll;
typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define maxn 100005

template<class T>
struct Node {
	T data ;
	Node *next;
	Node(){}
	Node(T data,Node *next) {
		this->data = data;
		this->next = next;
	}
};	

template<class T>
struct List {
	Node<T> *pHead;
	Node<T> *pTail;
	List() {
		pHead = pHead = NULL ;
	}	
	void push_front(T x) {
		Node<T> *pNode = new Node<T>(x,nullptr);
		if( pHead == NULL ) {
			pHead = pTail = pNode;
		}
		else {
			pNode->next = pHead;
			pHead = pNode;
		}
	}
	void push_back(T x) {
		Node<T> *pNode = new Node<T>(x,nullptr);
		if( pHead == NULL ) {
			pHead = pTail = pNode ;
		}
		else {
			pTail->next = pNode;
			pTail = pNode;
		}
	}
	void pop_front() {
		Node<T> *tmp = pHead;
		pHead = pHead->next;
		delete tmp;
	}
	void remove(T x) {
		Node<T> *tmp = pHead;
		while( tmp != nullptr && tmp->data == x ) {
			Node<T> *deleted = tmp;
			tmp = tmp->next;
			pHead = tmp;
			delete deleted;
		}
		while( tmp != nullptr) {
			Node<T>* pNext = tmp->next;
			if( pNext != nullptr && pNext->data == x ) {
				Node<T>* p_next = pNext->next;
				tmp->next = p_next;
				delete pNext;
			}
			else tmp = tmp->next;
		}
	}
	void print() {
		for(Node<T> *tmp = pHead ; tmp != NULL ; tmp=tmp->next ) {
			printf("%d ",tmp->data);
		}
	}
};

void solve() { 
	int n;
	cin >> n;
	List<int> l;
	FOR(i,1,n) {
		int x;
		cin >> x;
		l.push_back(x);
	}
	int x;
	cin >> x;
	l.remove(x);
	l.print();
}		

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
//	cin >> T;
	while( T-- )
    	solve();
    return 0;
}
