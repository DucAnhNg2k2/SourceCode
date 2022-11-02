package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
       int n = sc.nextInt();
       long[] a = new long[n+5];
       for(int i = 1; i <= n; i++) {
           a[i] = sc.nextLong();
       }
       for(int i = 1; i <= n-1; i++) {
           if(a[i] >= a[i+1]) {
               System.out.println(i);
               return;
           }
       }
        System.out.println("0");
    }
    public static void main(String[] args) {
	int t = 1;
        t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}