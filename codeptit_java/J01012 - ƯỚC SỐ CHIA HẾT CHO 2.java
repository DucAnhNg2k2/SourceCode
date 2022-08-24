package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        long n = sc.nextLong();
        long cnt2 = 0;
        while(n%2 == 0) {
            n /= 2;
            cnt2++;
        }
        for(int i = 2; i <= Math.sqrt(n); i++) {
            if(n%i == 0) {
                int cnt = 0;
                while(n%i == 0) {
                    n /= i;
                    cnt++;
                }
                cnt2 *= (cnt+1);
            }
        }
        if(n > 1) cnt2 *= 2;
        System.out.println(cnt2);
    }
    
    public static void main(String[] args) {
	int t = 1;
        t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}