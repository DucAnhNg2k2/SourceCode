#pragma GCC optimize("O2")
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
#define debug cout << "YES" << endl
#define all(x) x.begin(),x.end()
using namespace std;
 
typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int IMAX = 1e9;
const LL LMAX = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005
 
#define CHAR_SIZE 128
class Trie
{
public:
    bool isLeaf;
    Trie* character[CHAR_SIZE];
 
    // Constructor
    Trie()
    {
        this->isLeaf = false;
 
        for (int i = 0; i < CHAR_SIZE; i++) {
            this->character[i] = nullptr;
        }
    }
 
    // Iterative function to insert a key into a Trie
    void insert(string key)
    {
        // start from the root node
        Trie* curr = this;
        for (int i = 0; i < key.length(); i++)
        {
            // create a new node if the path doesn't exist
            if (curr->character[key[i]] == nullptr) {
                curr->character[key[i]] = new Trie();
            }
    
            // go to the next node
            curr = curr->character[key[i]];
        }
    
        // mark the current node as a leaf
        curr->isLeaf = true;
    }
    // if the key is found in the Trie; otherwise, it returns false
    bool search(string key)
    {
        // return false if Trie is empty
        if (this == nullptr) {
            return false;
        }
    
        Trie* curr = this;
        for (int i = 0; i < key.length(); i++)
        {
            // go to the next node
            curr = curr->character[key[i]];
    
            // if the string is invalid (reached end of a path in the Trie)
            if (curr == nullptr) {
                return false;
            }
        }
    
        // return true if the current node is a leaf and the
        // end of the string is reached
        return curr->isLeaf;
    }
    // if the key is found in the Trie; otherwise, it returns false
    bool searchPrefix(string key)
    {
        // return false if Trie is empty
        if (this == nullptr) {
            return false;
        }
    
        Trie* curr = this;
        for (int i = 0; i < key.length(); i++)
        {
            // go to the next node
            curr = curr->character[key[i]];
    
            // if the string is invalid (reached end of a path in the Trie)
            if (curr == nullptr) {
                return false;
            }
        }
        return true;
    }
};
 
 
void solve() {
    int n;
    cin >> n;
    vector<string> s(n);
    for(auto &i:s) cin >> i;
    sort(all(s),[](string a,string b) {
        return a.size() > b.size();
    });
    Trie *tree = new Trie();
    for(auto &i:s) {
        if(tree->searchPrefix(i)) {
            cout << "NO" << endl;
            return;
        }
        tree->insert(i);
    }
    cout << "YES" << endl;
    delete tree;
}
 
int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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