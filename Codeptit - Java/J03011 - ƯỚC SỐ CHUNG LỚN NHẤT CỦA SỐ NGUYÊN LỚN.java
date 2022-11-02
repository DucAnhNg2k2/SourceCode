package runjavacodeptit;
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    public static void solve() {
        System.out.println(new BigInteger(sc.next(),10).gcd(new BigInteger(sc.next())));
    }
    public static void main(String[] args) {
        int t = 1;
        t = sc.nextInt();
        for(int i = 1; i<= t; i++) {
            solve();
        }
    }
}
