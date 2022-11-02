package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
       int a1 = sc.nextInt(), b1 = sc.nextInt(), c1 = sc.nextInt(), d1 = sc.nextInt();
       int a2 = sc.nextInt(), b2 = sc.nextInt(), c2 = sc.nextInt(), d2 = sc.nextInt();
       int A = Math.min(a1, a2), B = Math.min(b1,b2), C = Math.max(c1, c2), D = Math.max(d1, d2);
       int Poiter = Math.max(C-A, D-B);
       System.out.println(Poiter*Poiter);
    }
    public static void main(String[] args) {
	int t = 1;
    //    t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}