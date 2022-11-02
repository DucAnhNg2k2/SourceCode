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
        public Node top = null;
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
    }
} 

namespace Csharp {
    class Program {
        static bool checkTree(Node a,Node b) {
            int dem = 0;
            if(a != null) dem++;
            if(b != null) dem++;
            if(dem == 0) return true;
            if(dem == 1) return false;
            if(a.data != b.data) return false;
            return checkTree(a.left,b.left) && checkTree(a.right,b.right);
        }
        static void solve() {            
            int n = int.Parse(Console.ReadLine());
            Tree tree = new Tree(Console.ReadLine());
            n = int.Parse(Console.ReadLine());
            Tree tree1 = new Tree(Console.ReadLine());
            if(checkTree(tree.top,tree1.top)) {
                System.Console.WriteLine(1);
            }
            else System.Console.WriteLine(0);
        }
        static void Main(string []args) {
            int t = int.Parse(Console.ReadLine());
            for(int i = 1; i <= t ;i++ ) {
                solve();
            }
        }  
    }
}