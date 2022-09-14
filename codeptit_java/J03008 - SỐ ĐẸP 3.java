package runjavacodeptit;
import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        String s = sc.nextLine();
        int sum = 0;
        for(int i = 0, j = s.length()-1; i <= j; i++, j--) {
            if(s.charAt(i) != s.charAt(j)) {
                System.out.println("NO");
                return;
            }
            sum = Integer.valueOf(s.charAt(i))-48;
            if(sum != 2 && sum != 3 && sum != 5 && sum != 7) {
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