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
        public void print() {
            Queue<Node> q = new Queue<Node>();
            q.Enqueue(top);
            while(q.Count > 0) {
                Node top = q.Dequeue();
                Console.Write(top.data + " ");
                if(top.left != null)
                q.Enqueue(top.left);
                if(top.right !=null) 
                q.Enqueue(top.right);
            }
            System.Console.WriteLine();
        }
        public int count() {
            return count(top);
        }
    }
} 

namespace Csharp {
    class Program {
        static void solve() {
            int n = int.Parse(Console.ReadLine());
            Tree tree = new Tree(Console.ReadLine());
            tree.print();
        }
        static void Main(string []args) {
            int t = int.Parse(Console.ReadLine());
            for(int i = 1; i <= t ;i++ ) {
                solve();
            }
        }  
    }
}