using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using _Tree;

namespace _Tree {
    class Node {
        public int data;
        public Node left = null, right = null;
        public Node() {}
        public Node(int data) { this.data = data; }
    }
    class Tree {
        private Node top = null;
        private void print(Node top) {
            if(top != null) {
                print(top.left);
                print(top.right);
                if(top.left == null && top.right == null) {
                    System.Console.Write(top.data + " ");
                }
            }
        }
        public void insert(int x) {
            if(top == null) {
                top = new Node(x);
                return;
            }
            Node temp = top;
            while(temp != null) {
                if(temp.data < x) {
                    if(temp.right ==null) {
                        temp.right = new Node(x);
                        return;
                    }
                    temp = temp.right;
                }
                else {
                    if(temp.left ==null) {
                        temp.left = new Node(x);
                        return;
                    }
                    temp = temp.left;
                }
            }
        }
        public void insert(string s) {
            string[] str = Regex.Replace(s,@"\s+"," ").Trim().Split(' ');
            for(int i = 0; i < str.Length; i++) {
                insert(int.Parse(str[i]));
            }
        }
        public void print() {
            print(top);
            Console.WriteLine();
        }
    }
} 

namespace Csharp {
    class Program {
        static void solve() {
            int n = int.Parse(Console.ReadLine());
            Tree tree = new Tree();
            tree.insert(Console.ReadLine());
            tree.print();
        }
        static void Main(string []args) {
            int T = int.Parse(Console.ReadLine());
            for(int i = 1; i <= T; i++ ) {
                solve();
            }
        }  
    }
}