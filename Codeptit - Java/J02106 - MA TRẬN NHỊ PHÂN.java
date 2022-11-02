package runjavacodeptit;
import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        int n = sc.nextInt();
        int dem = 0;
        for(int i = 1; i <= n; i++) {
            int cnt = 0;
            for(int j = 1; j <= 3; j++) {
                int x = sc.nextInt();
                if(x == 1) cnt++;
                else cnt--;
            }
            if(cnt > 0) dem++;
        }
        System.out.println(dem);
    }
    public static void main(String[] args) {
	int t = 1;
    //    t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}