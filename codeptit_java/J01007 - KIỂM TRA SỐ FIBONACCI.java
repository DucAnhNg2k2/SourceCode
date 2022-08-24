package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        long n = sc.nextLong();
        long[] s = new long[93];
        s[0] = 0;
        s[1] = 1;
        for(int i = 2; i <= 92; i++) {
            s[i] = s[i-1] + s[i-2];
        }
        for(int i = 0; i <= 92; i++) {
            if(s[i] == n) {
                System.out.println("YES");
                return;
            }
        }
        System.out.println("NO");
    }
    
    public static void main(String[] args) {
	int t = 1;
        t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}