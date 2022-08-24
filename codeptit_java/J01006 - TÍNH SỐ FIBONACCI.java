package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        int n = sc.nextInt();
        long[] f = new long[93];
        f[0] = 0;
        f[1] = 1;
        for(int i = 2; i <= 92; i++) {
            f[i] = f[i-1] + f[i-2];
        }
        System.out.println(f[n]);
    }
    
    public static void main(String[] args) {
	int t = 1;
        t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}