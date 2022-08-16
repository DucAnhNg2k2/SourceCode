using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;

namespace Csharp {
    class Program {
        static void solve() {
            string s = Console.ReadLine();
            Stack<int> st = new Stack<int>();
            for(int i =0; i < s.Length ; i++) {
                if( s[i] >= '0' && s[i] <= '9') {
                    st.Push(int.Parse(s[i].ToString()));
                }
                else {
                    int s1 = st.Pop();
                    int s2 = st.Pop();
                    switch(s[i]) {
                        case '+':
                            st.Push(s1+s2);
                            break;
                        case '-':
                            st.Push(s2-s1);
                            break;
                        case '*':
                            st.Push(s1*s2);
                            break;
                        case '/':
                            st.Push(s2/s1);
                            break;
                    }
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