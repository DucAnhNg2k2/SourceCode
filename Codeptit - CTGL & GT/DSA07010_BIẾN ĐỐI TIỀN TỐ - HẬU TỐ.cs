using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;


namespace Csharp {
    class Program {
        static int level(char s) {
            if( s == '^' ) return 4;
            else if( s == '*' || s == '/' || s == '%') return 3;
            else if( s == '+' || s == '-') return 2;
            else if( s == '(' || s == ')') return 0;
            return 1;
        }
        static string TrungToVeHauTo(string str) {
            string ans = new string("");
            Stack<string> st = new Stack<string>();
            for(int i = 0; i < str.Length; i++) {
                if(level(str[i]) == 1) {
                    ans += str[i];
                }
                else if( str[i].Equals('(')) {
                    st.Push("(");
                }
                else if( str[i] == ')') {
                    while(st.Peek().Equals("(") == false) {
                        ans += st.Pop();
                    }
                    st.Pop();
                }
                else {
                    while(st.Count > 0 && level(str[i]) <= level(char.Parse(st.Peek()))) {
                        ans += st.Pop();
                    }
                    st.Push(str[i].ToString());
                }
            }
            while(st.Count > 0) ans += st.Pop();
            return ans;
        }
        static string TienToVeTrungTo(string str) {
            Stack<string> st = new Stack<string>();
            for(int i = str.Length-1 ; i >= 0; i--) {
                if(level(str[i])==1) {
                    st.Push(str[i].ToString());
                }
                else {
                    string s1 = st.Pop();
                    string s2 = st.Pop();
                    st.Push('(' + s1 + str[i].ToString() + s2 + ')');
                }
            }
            return st.Pop();
        }
        static void solve() {
            System.Console.WriteLine(TrungToVeHauTo(TienToVeTrungTo(Console.ReadLine())));
        }
        static void Main(string []args) {
            int T = int.Parse(Console.ReadLine());
            for(int i = 1; i <= T; i++ ) {
                solve();
            }
        }  
    }
}
