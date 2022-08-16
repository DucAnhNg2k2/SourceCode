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
        static int TienToVeTrungTo(string str) {
            Stack<int> st = new Stack<int>();
            for(int i = str.Length-1 ; i >= 0; i--) {
                if(level(str[i])==1) {
                    st.Push(int.Parse(str[i].ToString()));
                }
                else {
                    int s1 = st.Pop();
                    int s2 = st.Pop();
                     switch(str[i]) {
                        case '+':
                            st.Push(s1+s2);
                            break;
                        case '-':
                            st.Push(s1-s2);
                            break;
                        case '*':
                            st.Push(s1*s2);
                            break;
                        case '/':
                            st.Push(s1/s2);
                            break;
                    }
                }
            }
            return st.Pop();
        }
        static void solve() {
            System.Console.WriteLine(TienToVeTrungTo(Console.ReadLine()));
        }
        static void Main(string []args) {
            int T = int.Parse(Console.ReadLine());
            for(int i = 1; i <= T; i++ ) {
                solve();
            }
        }  
    }
}