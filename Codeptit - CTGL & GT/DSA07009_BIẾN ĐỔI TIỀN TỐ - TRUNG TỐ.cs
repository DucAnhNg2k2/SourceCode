using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;

namespace Csharp {
    class Program {
        static bool check(char s) {
            if( s == '+' || s == '-' || s == '*' || s == '/') return true;
            return false;
        }
        static void solve() {
            string s = Console.ReadLine();
            Stack<string> st = new Stack<string>();
            for(int i = s.Length-1; i >= 0; i--) {
                if( check(s[i]) == false) {
                    st.Push(s[i].ToString());
                }
                else {
                    string s1 = st.Pop();
                    string s2 = st.Pop();
                    st.Push('(' + s1 + s[i].ToString() + s2 + ')');
                }
            }
            System.Console.WriteLine(st.Pop());
        }
        static void Main(string []args) {
            int T = int.Parse(Console.ReadLine());
            for(int i = 1; i <= T; i++ ) {
                solve();
            }
        }  
    }
}