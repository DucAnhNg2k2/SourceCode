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
        for(int i = 1,j = n; i <= j; i++, j--) {
            if(a[i] != a[j]) {
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
    }
    public static void main(String[] args) {
	int t = 1;
        t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}