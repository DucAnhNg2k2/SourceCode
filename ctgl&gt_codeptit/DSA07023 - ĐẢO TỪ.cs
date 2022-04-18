using System;

namespace Csharp {
    class Program {
        static void solve() {
            string str = Console.ReadLine();
            string[] arr = str.Split(' ');
            for(int i = arr.Length-1; i >= 0; i--) {
                Console.Write(arr[i] + " ");
            }
            Console.WriteLine();
        }
        static void Main(string []args) {
            int T = int.Parse(Console.ReadLine());
            for(int i = 1; i <= T; i++ ) {
                solve();
            }
        }  
    }
}