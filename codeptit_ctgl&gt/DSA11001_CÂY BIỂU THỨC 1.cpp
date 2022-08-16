#include <bits/stdc++.h>
#define LL long long 
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FO(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define all(x) x.begin(),x.end()
#define debug cout << "YES" << endl
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

template<class T>
struct Node {
	T data;
	Node *left = nullptr;
    Node *right = nullptr;
	Node(){}
	Node(T data) {
		this->data = data;
		this->left = nullptr;
        this->right = nullptr;
	}
};	

template<class T>
class Tree {
    public:
        Node<T> *root = nullptr;
        void printf(Node<T> *root) {
            if( root != nullptr) {
                printf(root->left);
                cout << root->data;
                printf(root->right);
            }
        }
};

void solve() {
	string s;
    cin >> s;
	Tree<char> tree;
    stack<Node<char>*> st;
    FOR(i,0,s.size()-1) {
        char x = s[i];
        Node<char>* root = new Node<char>(x);
        if( x != '+' && x != '-' && x != '*' && x != '/') {
            st.push(root);
        }
        else {
            Node<char>* right = st.top(); st.pop();
            Node<char>* left = st.top(); st.pop();
            root->left = left;
            root->right = right;
            st.push(root);
        }
    }
    tree.root = st.top(); st.pop();
    tree.printf(tree.root);
    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}