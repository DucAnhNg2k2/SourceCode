package runjavacodeptit;
import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static int[] a = new int[100005];
    public static void solve() {
        int n = sc.nextInt();
        for(int i = 1; i <= n; i++) {
            a[i] = 0;
        }
        for(int i = 1; i < n; i++) {
            int u = sc.nextInt(), v = sc.nextInt();
            a[u]++;
            a[v]++;
            if(a[u] == n-1 || a[v] == n-1) {
                System.out.println("Yes");
                return;
            }
        }
        System.out.println("No");
    }
    public static void main(String[] args) {
        int t = 1;
    //    t = Integer.parseInt(sc.nextLine());
        for(int i = 1; i<= t; i++) {
            solve();
        }
    }
}