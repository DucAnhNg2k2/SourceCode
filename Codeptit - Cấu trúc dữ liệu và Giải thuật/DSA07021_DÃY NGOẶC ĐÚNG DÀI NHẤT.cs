using System;
using System.Collections.Generic;

namespace Csharp {
    class Program {
        static void solve() {
            var s = Console.ReadLine();
            Boolean[] vs = new Boolean[s.Length+5];
            Stack<int> stack = new Stack<int>();
            for(int i = 0; i < s.Length; i++) {
                if(s[i].Equals('(')) {
                    stack.Push(i);
                }
                else {
                    if(stack.Count > 0) {
                        vs[stack.Peek()] = true;
                        vs[i] = true;
                        stack.Pop();
                    }
                    
                }
            }
            int ans = 0;
            for(int i = 0; i < s.Length; i++) {
                if(vs[i].Equals(true)) {
                    int dem = 0;
                    while(i < s.Length && vs[i].Equals(true)) {
                        dem++;
                        i++;
                    }
                    i--;
                    ans = Math.Max(ans,dem);
                }
            }
            Console.WriteLine(ans);
        }
        static void Main(string []args) {
            int T = int.Parse(Console.ReadLine());
            for(int i = 1; i <= T; i++ ) {
                solve();
            }
        }  
    }
}