package runjavacodeptit;
import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        int n = sc.nextInt();
        Stack<Integer> st = new Stack<>();
        for(int i = 1; i <= n; i++) {
            int x = sc.nextInt();
            if(!st.isEmpty() && (st.peek()+x)%2 == 0) {
                st.pop();
            }
            else {
                st.add(x);
            }
        }
        System.out.println(st.size());
    }
    public static void main(String[] args) {
	int t = 1;
    //    t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}