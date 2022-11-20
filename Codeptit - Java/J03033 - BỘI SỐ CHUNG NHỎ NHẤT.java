import java.math.BigInteger;
import java.util.*;
import java.io.*;
public class Main{
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        BigInteger x1 = new BigInteger(sc.nextLine(),10);
        BigInteger x2 = new BigInteger(sc.nextLine(),10);

        System.out.println(x1.multiply(x2).divide(x1.gcd(x2)).toString());
    }
    public static void main(String[] args)  {
        int Tsolve = 1;
        Tsolve = Integer.parseInt(sc.nextLine());
        for (int i = 1; i <= Tsolve; i++) {
            solve();
        }
    }
}