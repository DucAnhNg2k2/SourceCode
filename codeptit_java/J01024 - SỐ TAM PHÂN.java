package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
      String s = sc.nextLine();
      for(int i = 0; i < s.length(); i++) {
          char c = s.charAt(i);
          if(c != '0' && c != '1' && c != '2') {
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