package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        long n = sc.nextLong(),ans = -1;
        for(int i = 2; i <= Math.sqrt(n); i++) {
            if(n%i == 0) {
                ans = i;
                while(n%i == 0) n /= i;
            }
        }
        if(n > 1) {
            ans = n;
        }
        System.out.println(ans);
    }
    public static void main(String[] args) {
	int t = 1;
        t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}