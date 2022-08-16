using System;
using System.Collections.Generic;
using System.Collections;
using System.Text.RegularExpressions;
using _Tree;

namespace _Tree {
    class Node {
        public int data;
        public Node left = null, right = null;
        public Node() {}
        public Node(int data) {this.data = data;}
    }
    class Tree {
        public Node top = null;
        public int[] index = new int[10005];
        public void insert(ref Node root,int x) {
            if(root == null) {
                root = new Node(x);
                return;
            }
            if(index[x] < index[root.data]) {
                insert(ref root.left,x);
            }
            else {
                insert(ref root.right,x);
            }
        }
        public void insertInOrder(string s) {
            string[] str = Regex.Replace(s,@"\s+"," ").Trim().Split(' ');
            for(int i = 0; i < str.Length; i++) {
                index[int.Parse(str[i])] = i;
            }
        }
        public void InsertPreOrder(string s) {
            string[] str = Regex.Replace(s,@"\s+"," ").Trim().Split(' ');
            for(int i = 0; i < str.Length; i++) {
                insert(ref top,int.Parse(str[i]));
            }
        }
        private void print(Node top) {
            if(top != null) {
                print(top.left);
                print(top.right);
                Console.Write(top.data + " ");
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
            tree.insertInOrder(Console.ReadLine());
            tree.InsertPreOrder(Console.ReadLine());
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