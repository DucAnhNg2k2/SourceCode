package runjavacodeptit;
import java.io.*;
import java.util.*;
import java.util.logging.Level;
import java.util.logging.Logger;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static int[] prime = new int[2000005];
    private static final int n = 2000000;
    private static void solve() {
       for(int i = 1; i <= n; i++) {
           prime[i] = -1;
       }
       for(long i = 2; i <= n; i++) {
           for(long j = i*i; j <= n; j += i) {
               int I = (int)i;
               int J = (int)j;
               if(prime[J] == -1) {
                   prime[J] = I;
               }
           }
       }
       for(int i = 1; i <= n; i++) {
           if(prime[i] == -1) prime[i] = i;
       }
//       for(int i = 1; i <= 100; i++) {
//           System.out.println(i + " " + prime[i]);
//       }
       int n = sc.nextInt();
       long sum = 0;
       while(n-- > 0) {
           int num = sc.nextInt();
           while(num > 1) {
               sum += prime[num];
               num /= prime[num];
           }
       }
        System.out.println(sum);
    }
    
    public static void main(String[] args) {
	int t = 1;
    //    t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}