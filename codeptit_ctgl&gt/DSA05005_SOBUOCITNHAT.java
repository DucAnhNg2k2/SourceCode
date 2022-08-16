package View;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static Scanner sc = new Scanner(System.in);
    public static void solve() {
        int n = sc.nextInt();
        ArrayList<Integer> arr = new ArrayList<>();
        ArrayList<Integer> dp = new ArrayList<>();
        for(int i = 1 ; i <= n ; i++ ) {
            int x = sc.nextInt();
            arr.add(x);
            dp.add(0);
        }
        dp.set(0, 1);
        for(int i = 1 ; i < n; i++ ) {
            int max = 0;
            for(int j = 0 ; j < i ; j++ ) {
                if( arr.get(j) <= arr.get(i) && dp.get(i) < dp.get(j)) {
                    dp.set(i, dp.get(j));
                }
            }
            dp.set(i,dp.get(i)+1);
        }
        int ans = 0;
        for(Integer i : dp ) {
            ans = Math.max(ans, i);
        //    System.out.print(i + " ");
        }
        System.out.println(n-ans);
    }
    public static void main(String[] args) {
        int T = 1;
        T = sc.nextInt();
        for(int i = 1 ; i <= T ; i++){
            solve();
        }
    }
}