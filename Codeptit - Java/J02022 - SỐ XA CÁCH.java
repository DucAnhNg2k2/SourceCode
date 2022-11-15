import java.util.*;
import java.io.*;


public class Main{
    private static Scanner sc = new Scanner(System.in);
    private static boolean []x = new boolean[25];
    private static int []a = new int[25];
    private static void Xuat(int n) {
        for(int i = 2; i <= n; i++) {
            if(Math.abs(a[i]-a[i-1]) == 1) {
                return;
            }
        }
        for(int i = 1; i <= n; i++) {
            System.out.print(a[i]);
        }
        System.out.println();
    }
    private static void Try(int i, int n) {
        for(int j = 1; j <= n; j++) {
            if(!x[j]) {
                x[j] = true;
                a[i] = j;
                if(i < n) {
                    Try(i+1,n);
                }
                else Xuat(n);
                x[j] = false;
            }
        }
    }
    private static void solve() {
        int n = sc.nextInt();
        Try(1,n);
        System.out.println();
    }

    public static void main(String[] args)  {
        int Tsolve = 1;
        Tsolve = Integer.parseInt(sc.nextLine());
        for (int i = 1; i <= Tsolve; i++) {
            solve();
        }
    }
}