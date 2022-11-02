package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
       int m = sc.nextInt(), n = sc.nextInt();
       long[] a = new long[n+5];
       for(int i = 1; i <= n; i++) {
           a[i] = sc.nextLong();
       }
       int[] l = new int[n+5];
       int[] r = new int[n+5];
       Stack<Integer> st = new Stack<>();
       for(int i = 1; i <= n; i++) {
           while(!st.empty() && a[st.peek()] >= a[i]) {
               st.pop();
           }
           if(st.empty()) l[i] = 1;
           else l[i] = st.peek()+1;
           st.push(i);
       }
       st = new Stack<>();
       for(int i = n; i >= 1; i--) {
           while(!st.empty() && a[st.peek()] >= a[i]) {
               st.pop();
           }
           if(st.empty()) r[i] = n;
           else r[i] = st.peek()-1;
           st.push(i);
       }
       long ans = 0;
       for(int i = 1; i <= n; i++) {
           ans = Math.max(ans, (r[i]-l[i]+1)*a[i]);
       }
       
       for(int i = 1; i <= n; i++) {
           a[i] = m - a[i];
       }
       st = new Stack<>();
        for(int i = 1; i <= n; i++) {
           while(!st.empty() && a[st.peek()] >= a[i]) {
               st.pop();
           }
           if(st.empty()) l[i] = 1;
           else l[i] = st.peek()+1;
           st.push(i);
       }
       st = new Stack<>();
       for(int i = n; i >= 1; i--) {
           while(!st.empty() && a[st.peek()] >= a[i]) {
               st.pop();
           }
           if(st.empty()) r[i] = n;
           else r[i] = st.peek()-1;
           st.push(i);
       }
        for(int i = 1; i <= n; i++) {
           ans = Math.max(ans, (r[i]-l[i]+1)*a[i]);
       }
        System.out.println(ans);
    }
    
    public static void main(String[] args) {
	int t = 1;
     //   t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}