package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        long n = sc.nextLong();
        for(int i = 2; i <= Math.sqrt(n); i++) {
            if(n%i == 0) {
                int cnt = 0;
                while(n%i == 0) {
                    n /= i;
                    cnt++;
                }
                System.out.print(i + "(" + cnt + ")" + " ");
            }
        }
        if(n > 1) {
            System.out.println(n + "(1)");
        }
        System.out.println("");
    }
    
    public static void main(String[] args) {
	int t = 1;
        t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            System.out.print("Test " + i + ": ");
            solve();
	}
    }
}