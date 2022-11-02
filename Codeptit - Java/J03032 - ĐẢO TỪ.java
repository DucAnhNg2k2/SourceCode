package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        String s = sc.nextLine();
        String[] str = s.trim().split("\\s+");
        for(String i:str) {
            StringBuilder ss = new StringBuilder(i);
            System.out.print(ss.reverse().toString() + " ");
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