using System;
using System.Text.RegularExpressions;

namespace Program {
    class Program {
        static int[] ReadArrayInt(string s) {
            string[] str = Regex.Replace(s,@"\s+"," ").Trim().Split(' ');
            int[] ans = new int[str.Length];
            for(int i = 0; i < str.Length; i++) {
                ans[i] = int.Parse(str[i]);
            }
            return ans;
        }
        static void solve() {
            int n = int.Parse(Console.ReadLine());
            int[] a = ReadArrayInt(Console.ReadLine());
            Array.Sort(a);
            System.Console.WriteLine(a[(n-1)/2]);
        }
        static void Main(string[] args)
        {
            int t = 1;
            t = int.Parse(Console.ReadLine());
            for(int i = 1; i <= t; i++) {
                solve();
            }
        }
    }
}