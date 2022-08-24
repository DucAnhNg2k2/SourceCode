package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        int n = sc.nextInt();
        long h = sc.nextLong();
        for(int i = 1; i <= n-1; i++) {
            double s = h*Math.sqrt((double)i*1.0/n);
            System.out.printf("%.6f", s);
            System.out.print(" ");
        }
        System.out.println("");
    }
    
    public static void main(String[] args) {
	int t = 1;
        t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}