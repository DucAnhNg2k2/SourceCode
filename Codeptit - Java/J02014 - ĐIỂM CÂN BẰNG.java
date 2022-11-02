package runjavacodeptit;
import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static int[] a = new int[100005];
    public static void main(String[] args) {
	int t = 1;
        t = Integer.parseInt(sc.nextLine());
	for(int ii = 1; ii <= t; ii++) {
            int n = sc.nextInt(), check = 0;
            int sum = 0, sum2 = 0;
            for(int i = 1; i <= n; i++) {
                a[i] = sc.nextInt();
                sum += a[i];
            }
            a[0] = 0;
            for(int i = 1; i <= n; i++) {
                sum2 += a[i-1];
                sum -= a[i];
                if(sum == sum2) {
                    System.out.println(i);
                    check = 1;
                    break;
                }
            }
            if(check == 0)
                System.out.println(-1);
	}
    }
}