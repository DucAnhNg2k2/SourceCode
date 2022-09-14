package runjavacodeptit;
import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();
        String[] a = s1.trim().split("\\s+");
        String[] b = s2.trim().split("\\s+");
        Set<String> ss1 = new TreeSet<>();
        Set<String> ss2 = new TreeSet<>();
        ss1.addAll(Arrays.asList(a));
        ss2.addAll(Arrays.asList(b));
        for(String i:ss1) {
            if(ss2.contains(i) == false) {
                System.out.print(i + " ");
            }
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