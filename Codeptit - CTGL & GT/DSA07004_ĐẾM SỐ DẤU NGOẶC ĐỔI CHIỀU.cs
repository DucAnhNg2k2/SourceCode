using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;

namespace Csharp {
    class Program {
        static void solve() {
            string s = Console.ReadLine();
            int dem = 0,ans = 0;
            for(int i = 0; i < s.Length; i++) {
                if(s[i].Equals('(')) {
                    dem++;
                }
                else {
                    if( dem==0 ) {
                        ans++;
                        dem++;
                    }
                    else dem--;
                }
            }
            if(dem>0) ans += dem/2;
            System.Console.WriteLine(ans);
        }
        static void Main(string []args) {
            int T = int.Parse(Console.ReadLine());
            for(int i = 1; i <= T; i++ ) {
                solve();
            }
        }  
    }
}