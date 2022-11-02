package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
       int n = sc.nextInt(), k = sc.nextInt();
       long[] a = new long[n+5];
       long sum = 0;
       for(int i = 1; i <= n; i++) {
           a[i] = sc.nextLong();
       }
       Arrays.sort(a, 1, n+1);
       for(int i = 1; i <= n; i++) {
           if(a[i] < 0 && k > 0) {
               k--;
               a[i] = -a[i];
           }
       }
       Arrays.sort(a,1,n+1);
       for(int i = 1; i <= n; i++) {
           sum += a[i];
       }
       if(k%2 == 1) sum -= a[1]*2;
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