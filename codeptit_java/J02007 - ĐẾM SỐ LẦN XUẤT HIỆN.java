package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
       Map<Integer,Integer> m = new LinkedHashMap<>();
       int n = sc.nextInt();
       for(int i = 1; i <= n; i++) {
           int x = sc.nextInt();
           int cnt = 1;
           if(m.get(x) != null) {
               cnt = m.get(x) + 1;
           }
           m.put(x,cnt);
       }
       for(Map.Entry<Integer,Integer> i : m.entrySet()) {
           System.out.println(i.getKey() + " xuat hien " + i.getValue() + " lan");
       }
    }
    public static void main(String[] args) {
	int t = 1;
        t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            System.out.println("Test " + i + ":");
            solve();
	}
    }
}