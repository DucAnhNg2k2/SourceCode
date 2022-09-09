package runjavacodeptit;
import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static int n;
    private static int[] a = new int[25];
    private static int[] x = new int[25];
    private static ArrayList<String> s = new ArrayList<>();
    
    private static void Xuat() {
        ArrayList<Integer> v = new ArrayList<>();
        for(int i = 1; i <= n; i++) {
            if(x[i] == 1) {
                if(v.isEmpty()) {
                    v.add(a[i]);
                }
                else {
                    if(a[i] <= v.get(v.size()-1)) return;
                    v.add(a[i]);
                }
            } 
        }
        if(v.size() < 2) {
            return;
        }
        String res = "";
        for(Integer i:v) {
            res = res + String.valueOf(i) + " ";
        }
        s.add(res);
    }
    private static void Try(int i) {
        for(int j = 0; j <= 1; j++) {
            x[i] = j;
            if(i < n) Try(i+1);
            else Xuat();
        }
    }
    private static void solve() {
        try {
            Scanner scc = new Scanner(new File("DAYSO.in"));
            n = scc.nextInt();
            for(int i = 1; i <= n; i++) {
                a[i] = scc.nextInt();
            }
            Try(1);
            Collections.sort(s);
            for(String i:s) {
                System.out.println(i);
            }
        }
        catch(IOException e) {
            
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