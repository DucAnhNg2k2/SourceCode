package runjavacodeptit;
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    public static void solve() {
        BigInteger a = new BigInteger(sc.next(),10);
        BigInteger b = new BigInteger(sc.next(),10);
        if(a.compareTo(b) == -1) {
            BigInteger tmp = a;
            a = b;
            b = tmp;
        }
        if(a.mod(b).toString()== "0") System.out.println("YES");
        else System.out.println("NO");
    }
    public static void main(String[] args) {
        int t = 1;
        t = sc.nextInt();
        for(int i = 1; i<= t; i++) {
            solve();
        }
    }
}
