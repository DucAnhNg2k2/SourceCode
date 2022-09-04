package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        String s = sc.nextLine();
        int dem = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s.charAt(i) == '4' || s.charAt(i) == '7') dem++;
        }
        if(dem == 4 || dem == 7) System.out.println("YES");
        else System.out.println("NO");
    }
    public static void main(String[] args) {
	int t = 1;
   //     t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}