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

LL toLL(const string &s) {
	LL res = 0;
	for(int i = 0 ; i < s.size() ; i++ ) 
		res = res*10 + (int)(s[i]-'0');
	return res;
}

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
        int cal(Node<T> *root) {
            if(root->left == nullptr && root->right == nullptr) {
                return toLL(root->data);
            }
            if(root->data == "+") return cal(root->left) + cal(root->right);
            if(root->data == "-") return cal(root->left) - cal(root->right);
            if(root->data == "*") return cal(root->left) * cal(root->right);
            if(root->data == "/") return cal(root->left) / cal(root->right);
        }
};

void solve() {
	int n;
    cin >> n;
    Tree<string> tree;
    queue<Node<string>*> q;
    FOR(i,1,n) {
        string s;
        cin >> s;
        if(tree.root == nullptr) {
            Node<string>* temp = new Node<string>(s);
            tree.root = temp;
            q.push(temp);
        }
        else {
            if( q.size() && q.front()->left != nullptr && q.front()->right != nullptr) {
                q.pop();
            }
            Node<string>* temp = new Node<string>(s);
            if( q.front()->left == nullptr) {
                q.front()->left = temp;
                q.push(temp);
            }
            else if( q.front()->right == nullptr) {
                q.front()->right = temp;
                q.push(temp);
            }
        }
    }
    cout << tree.cal(tree.root) << endl;
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