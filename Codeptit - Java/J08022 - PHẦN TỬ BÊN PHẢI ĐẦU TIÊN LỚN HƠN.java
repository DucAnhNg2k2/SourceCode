package runjavacodeptit;
import java.util.AbstractMap;
import java.util.Scanner;
import java.util.LinkedList;
import java.util.Map;
import java.util.Queue;
import java.util.Stack;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    public static void solve() {
        int n = sc.nextInt();
        int[] a = new int[n+5];
        for(int i = 1; i <= n; i++) {
            a[i] = sc.nextInt();
        }
        Stack<Integer> st = new Stack<>();
        for(int i = n; i >= 1; i--) {
            int tmp = a[i];
            while(!st.empty() && a[i] >= st.peek()) st.pop();
            if(st.empty()) a[i] = -1;
            else a[i] = st.peek();
            st.push(tmp);
        }   
        for(int i = 1; i <= n; i++) {
            System.out.print(a[i] + " ");
        }
        System.out.println("");
    }
    public static void main(String[] args) {
        int t = 1;
        t = Integer.parseInt(sc.nextLine());
        for(int i = 1; i<= t; i++) {
            solve();
        }
    }

}