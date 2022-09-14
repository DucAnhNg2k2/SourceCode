package runjavacodeptit;
import java.io.*;
import java.math.BigInteger;
import java.util.*;

class Run {
    Scanner sc = new Scanner(System.in);
    void solve() {
        Set<Character> s = new HashSet<>();
        String in = sc.nextLine();
        for(int i = 0; i < in.length(); i++) {
            s.add(in.charAt(i));
        }
        System.out.println(s.size());
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