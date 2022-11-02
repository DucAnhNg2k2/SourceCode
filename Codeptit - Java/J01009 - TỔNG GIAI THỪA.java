package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static long gt(int n) {
        long k = 1;
        for(int i =2; i <= n; i++) {
            k *= i;
        }
        return k;
    }
    private static void solve() {
        int n = sc.nextInt();
        long ans = 0;
        for(int i = 1; i <= n; i++) {
            ans += gt(i);
        }
        System.out.println(ans);
    }
    
    public static void main(String[] args) {
	int t = 1;
     //   t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}