package runjavacodeptit;
import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static int[] arr = new int[100005];
    public static void solve() {
        Map<Integer,Long> m = new HashMap<>();
        int n = sc.nextInt(), k = sc.nextInt();
        long ans = 0;
        for(int i = 1; i <= n; i++) {
            arr[i] = sc.nextInt();
            long val = 1;
            if(m.get(arr[i]) != null) {
                val = m.get(arr[i])+1;
            }
            m.put(arr[i], val);
        }
        for(int i = 1; i <= n; i++) {
            long dem = 0;
            if(m.get(k-arr[i]) != null) {
                dem = m.get(k-arr[i]);
            }
            if(arr[i]*2 == k) {
                ans += (dem*(dem-1)/2);
            }
            else {
                ans += m.get(arr[i])*dem;
            }
            m.put(arr[i], (long)0);
        }
        System.out.println(ans);
    }
    public static void main(String[] args) {
        int t = 1;
        t = Integer.parseInt(sc.nextLine());
        for(int i = 1; i<= t; i++) {
            solve();
        }
    }
}