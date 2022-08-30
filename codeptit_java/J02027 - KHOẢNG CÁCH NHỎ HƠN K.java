package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static int binary_search(int l,int r,int a[],int x) {
        while(l < r) {
            int m = (l+r)/2;
            if(a[m] < x) l = m+1;
            else r = m;
        }
        return l;
    }
    private static void solve() {
       int n = sc.nextInt(), k = sc.nextInt();
       int[] a = new int[n+5];
       for(int i = 1; i <= n; i++) {
           a[i] = sc.nextInt();
       }
       long ans = 0;
       Arrays.sort(a,1,n+1);
       for(int i = 1; i <= n; i++) {
           int idx = binary_search(i+1, n, a, a[i]+k);
           if(a[idx] >= a[i]+k || idx == n+1) {
               idx--;
           }
           if(idx > i) {
               ans += idx-i;
           }
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