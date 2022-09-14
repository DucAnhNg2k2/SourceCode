package runjavacodeptit;
import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        int n = sc.nextInt(), m = sc.nextInt();
        int[] a = new int[1005];
        int[] b = new int[1005];
        for(int i = 0; i < n; i++) {
            a[sc.nextInt()]++;
        }
        for(int i = 0; i < m; i++) {
            b[sc.nextInt()]++;
        }
        for(int i = 1 ; i <= 1000; i++) {
            if(a[i] != 0 && b[i] != 0) {
                System.out.print(i + " ");
            }
        }
    }
    public static void main(String[] args) {
	int t = 1;
    //    t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}