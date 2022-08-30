package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
       int n = sc.nextInt();
       for(int i = 1; i <= n; i++) {
           System.out.print("List(" + i + ") = ");
           for(int j = 1; j <= n; j++) {
               int x = sc.nextInt();
               if(x == 1) System.out.print(j + " ");
           }
           System.out.println("");
       }
    }
    public static void main(String[] args) {
	int t = 1;
    //    t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}