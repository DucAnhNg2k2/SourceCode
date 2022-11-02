package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
      String s = sc.nextLine();
      String ans = "";
      for(int i = 0; i < s.length(); i++) {
          boolean check = true;
          if(!ans.isEmpty() && ans.charAt(ans.length()-1) == s.charAt(i)) {
              check = false;
              ans = ans.substring(0,ans.length()-1);
          }
          if(check) {
              ans += s.charAt(i);
          }
      }
      if(ans.isEmpty()) System.out.println("Empty String");
      else System.out.println(ans);
    }
    public static void main(String[] args) {
	int t = 1;
    //    t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}