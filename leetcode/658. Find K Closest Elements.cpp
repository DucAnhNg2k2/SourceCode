struct Node {
	int val, sub;
	Node(int val,int sub) {
		this->val = val;
		this->sub = sub;
	}
};

struct cmp {
	bool operator()(Node a,Node b) {
		if(a.sub == b.sub) {
			return a.val > b.val;
		}
		return a.sub > b.sub;
	}
};

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    	priority_queue<Node,vector<Node>,cmp> q;
    	for(auto i: arr) {
    		q.push(Node(i, abs(i - x)));	
		}
		vector<int> res;
		while(res.size() < k) {
			res.push_back(q.top().val);
			q.pop();
		}
		sort(res.begin(), res.end());
		return res;
    }
};
