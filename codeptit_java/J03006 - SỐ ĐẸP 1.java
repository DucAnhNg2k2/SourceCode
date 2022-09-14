package runjavacodeptit;
import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        String s = sc.nextLine();
        for(int i = 0, j = s.length()-1; i <= j; i++, j--) {
            if(s.charAt(i) != s.charAt(j)) {
                System.out.println("NO");
                return;
            }
            if((Integer.valueOf(s.charAt(i))-48)%2 != 0) {
                System.out.println("NO");
                return;
            }
            if((Integer.valueOf(s.charAt(j))-48)%2 != 0) {
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