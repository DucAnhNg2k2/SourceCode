package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        long n = sc.nextLong();
        Queue<String> q = new LinkedList<String>();
        Stack<String> st = new Stack<>();
        q.add("6");
        q.add("8");
        while(!q.isEmpty()) {
            String top = q.poll();
            if(top.length() <= n) {
                st.add(top);
            }
            else continue;
            q.add(top+"6");
            q.add(top+"8");
        }
        System.out.println(st.size());
        while(!st.empty()) {
            System.out.print(st.pop() + " ");
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