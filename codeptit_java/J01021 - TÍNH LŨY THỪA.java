package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static final long MOD = 1000000007;
    private static long x,y;
    private static long power(long a,long b) {
        if(b == 0) return 1;
        if(b == 1) return a%MOD;
        long t = power(a, b/2)%MOD;
        long mul = (t*t)%MOD;
        if(b%2 == 0) {
            return mul;
        }
        else {
            return (mul*a)%MOD;
        }
    }
    private static void solve() {
        System.out.println(power(x, y));
        
    }
    public static void main(String[] args) {
	int t = 1;
    //    t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= 30; i++) {
            x = sc.nextLong();
            y = sc.nextLong();
            if(x + y == 0) break;
            solve();
	}
    }
}