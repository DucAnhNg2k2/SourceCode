package runjavacodeptit;
import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static int[][] f = new int[1000005][3];
    private static void solve() {
        char[] s = sc.nextLine().toCharArray();
        if(s[0] == 'A') {
            f[0][1] = 0;
            f[0][2] = 1;
        }
        else {
            f[0][1] = 1;
            f[0][2] = 0;
        }
        for(int i = 1; i < s.length; i++) {
            if(s[i] == 'A') {
                f[i][1] = Math.min(f[i-1][1], f[i-1][2]+1);
                f[i][2] = Math.min(f[i-1][1]+1, f[i-1][2]+1);
            }
            else {
                f[i][1] = Math.min(f[i-1][1]+1, f[i-1][2]+1);
                f[i][2] = Math.min(f[i-1][1]+1, f[i-1][2]);
            }
        }
        System.out.println(f[s.length-1][1]);
    }
    public static void main(String[] args) {
	int t = 1;
    //    t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}