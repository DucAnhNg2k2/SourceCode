package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        String s = sc.nextLine();
        int sum = 0;
        for(int i = 0; i < s.length()-1; i++) {
            char c = s.charAt(i);
            char d = s.charAt(i+1);
            if(Math.abs(d-c) != 2) {
                System.out.println("NO");
                return;
            }
            sum += Integer.valueOf(c) - 48;
            if(i == s.length()-2) {
                sum += Integer.valueOf(d) - 48;
            }
        }
        if(sum%10 != 0) System.out.println("NO");
        else System.out.println("YES");
    }
    public static void main(String[] args) {
	int t = 1;
        t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}