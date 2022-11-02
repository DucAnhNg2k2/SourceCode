package runjavacodeptit;
import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static String ChuanHoaHoTen(String s) {
        String[] a = s.trim().split("\\s+");
        String ans = "";
        for(int idx = 1; idx < a.length; idx++) {
            String i = a[idx];
            StringBuilder ii = new StringBuilder(i.toLowerCase());
            ii.setCharAt(0, Character.toUpperCase(ii.charAt(0)));
            ans += ii.toString() + " ";
        }
        ans = ans.substring(0,ans.length()-1) + ", ";
        ans += a[0].toUpperCase();
        return ans;
    }
    private static void solve() {
        System.out.println(ChuanHoaHoTen(sc.nextLine()));
    }
    public static void main(String[] args) {
	int t = 1;
        t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}