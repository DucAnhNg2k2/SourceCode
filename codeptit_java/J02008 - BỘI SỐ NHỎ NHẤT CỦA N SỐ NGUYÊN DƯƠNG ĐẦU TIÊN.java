package runjavacodeptit;
import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        int n = sc.nextInt();
        int[] cnt = new int[105];
        for(int i = 1; i <= 100; i++) {
            cnt[i] = 0;
        }
        for(int i = 1; i <= n; i++) {
            int val = i;
            for(int j = 2; j <= val; j++) {
                if(val%j == 0) {
                    int dem = 0;
                    while(val%j == 0) {
                        dem++;
                        val /= j;
                    }
                    cnt[j] = Math.max(cnt[j], dem);
                }
            }
        }
        BigInteger ans = new BigInteger("1");
        for(int i = 1; i <= 100; i++) {
            if(cnt[i] != 0) {
                ans = ans.multiply(new BigInteger(String.valueOf(i)).pow(cnt[i]));
            }
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