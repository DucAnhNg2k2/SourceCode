package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        String s = sc.nextLine();
        Stack<Integer> st = new Stack<>();
        boolean[] c = new boolean[100005];
        for(int i = 0; i < s.length(); i++) {
            c[i] = false;
            if(s.charAt(i) == '(') st.push(i);
            else if(!st.empty()){
                int idx = st.pop();
                c[idx] = c[i] = true;
            }
        }
        int dem = 0, ans = 0;
        for(int i = 0 ; i < s.length(); i++) {
            if(c[i]) dem++;
            else dem = 0;
            ans = Math.max(ans, dem);
        }
        System.out.println(ans);
    }
    
    public static void main(String[] args) {
	int t = 1;
        t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}