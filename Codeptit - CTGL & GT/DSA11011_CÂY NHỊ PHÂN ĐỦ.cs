using System;
using System.Collections.Generic;
using System.Collections;
using System.Text.RegularExpressions;
using _Tree;

namespace _Tree {
    class Node {
        public int data;
        public Node left = null;
        public Node right = null;
        public Node(){}
        public Node(int data){ this.data = data; }
    }
    class Tree {
        private Node top = null;
        private void insert(ref Node top,int u,int v,char x) {
            if(top == null) {
                return;
            }
            if(top.data == u) {
                if(x.Equals('L') == true) {
                    top.left = new Node(v);
                }
                else {
                    top.right = new Node(v);
                }
                return;
            }
            insert(ref top.left,u,v,x);
            insert(ref top.right,u,v,x);
        }
        private void insert(int u,int v,char x) {
            insert(ref top,u,v,x);
        }
        private int count(Node top) {
            if(top == null) return 0;
            return 1 + count(top.left) + count(top.right);
        }
        public Tree(string str) {
            string[] s = Regex.Replace(str,@"\s+"," ").Trim().Split(' ');
            init(int.Parse(s[0]));
            for(int i = 0; i < s.Length; i += 3) {
                insert(int.Parse(s[i]),int.Parse(s[i+1]),char.Parse(s[i+2]));
            }
        }
        public void init(int x) {
            top = new Node(x);
        }
        public bool checkTree1() {
            Queue<KeyValuePair<Node,int>> q = new Queue<KeyValuePair<Node,int>>();
            q.Enqueue(new KeyValuePair<Node, int>(top,0));
            int ans = -1;
            while(q.Count > 0) {
                KeyValuePair<Node,int> top = q.Dequeue();
                Node _top = top.Key;
                int count = top.Value;
                if(_top.left == null && _top.right == null) {
                    if(ans == -1) ans = count;
                    else {
                        if(ans != count) {
                            return false;
                        }
                    }
                }
                if(_top.left != null) {
                    q.Enqueue(new KeyValuePair<Node,int>(_top.left,count+1));
                }
                if(_top.right != null) {
                    q.Enqueue(new KeyValuePair<Node,int>(_top.right,count+1));
                }
            }
            return true;
        }
        public bool checkTree2(Node top) {
            if(top == null) return true;
            int dem = 0;
            if(top.left != null) dem++;
            if(top.right != null) dem++;
            return (dem != 1 && checkTree2(top.left) && checkTree2(top.right));
        }
        public bool checkTree2() {
            return checkTree2(top);
        }
        public bool checkTree() {
            return (checkTree1() && checkTree2(top));
        }
    }
} 

namespace Csharp {
    class Program {
        static void solve() {            
            int n = int.Parse(Console.ReadLine());
            Tree tree = new Tree(Console.ReadLine());
            if(tree.checkTree2()) System.Console.WriteLine("1");
            else System.Console.WriteLine("0");
        }
        static void Main(string []args) {
            int t = int.Parse(Console.ReadLine());
            for(int i = 1; i <= t ;i++ ) {
                solve();
            }
        }  
    }
}
/*
2
4
1 2 L 1 3 R 2 4 L 2 5 R
3
1 2 L 1 3 R 2 4 L
*/
