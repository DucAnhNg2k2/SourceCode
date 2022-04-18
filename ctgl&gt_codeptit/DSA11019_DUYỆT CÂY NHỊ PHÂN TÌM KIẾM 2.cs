using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;

namespace Csharp {
    class Node {
        public int data;
        public Node left = null, right = null;
        public Node() {}
        public Node(int data) { this.data = data; }
    }
    class Tree {
        private Node top = null;
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
        public void print() {
            print(top);
            Console.WriteLine();
        }
        public void print(Node top) {
            if(top != null) {
                print(top.left);
                print(top.right);
                Console.Write(top.data + " ");
            }
        }
    }
    class Program {
        static void solve() {
            int n = int.Parse(Console.ReadLine());
            string[] str = Regex.Replace(Console.ReadLine(),@"\s+"," ").Trim().Split(' ');
            Tree tree = new Tree();
            for(int i = 0; i < str.Length; i++) {
                int x = int.Parse(str[i]);
                tree.insert(x);
            }
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