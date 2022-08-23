package runjavacodeptit;
import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        int n = sc.nextInt();
        int[] a = new int[n+5];
        for(int i = 1; i <= n; i++) {
            a[i] = sc.nextInt();
        }
        Stack<Integer> st = new Stack<>();
        for(int i = 1; i <= n; i++) {
            while(!st.empty() && a[st.peek()] <= a[i]) {
                st.pop();
            }
            if(st.empty()) System.out.print(i + " ");
            else System.out.print(i - st.peek() + " ");
            st.add(i);
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