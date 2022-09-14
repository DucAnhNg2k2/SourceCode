package runjavacodeptit;
import java.io.*;
import java.math.BigInteger;
import java.util.*;

class Run {
    Scanner sc = new Scanner(System.in);
    int[] x = new int[30];
    int n, k, stop;
    ArrayList<String> a = new ArrayList<>();
    void init() {
        stop = 0;
        for(int i = 1; i <= k; i++) {
            x[i] = i;
        }
    }
    
    void Xuat() {
        String ans = "";
        for(int i = 1; i <= k; i++) {
            ans += String.valueOf(x[i]) + " ";
        }
        a.add(ans);
    }
    
    void sinh() {
        int i = k;
        while(i >= 1 && x[i] == n-k+i) {
            i--;
        }
        if(i == 0) {
            stop = 1;
        }
        else {
            x[i]++;
            int p = x[i];
            while(i <= k) {
                x[i++] = p++;
            }
        }
    }
    
    void solve() {
        n = sc.nextInt(); k = sc.nextInt();
        init();
        while(stop == 0) {
            Xuat();
            sinh();
        }
        for(String i: a) {
            System.out.println(i);    
        }
        System.out.println("Tong cong co " + a.size() + " to hop");
    }
    
    Run() {
        int t = 1;
    //    t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}
public class Main {
    public static void main(String[] args) {
        new Run();
    }
}