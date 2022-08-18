package runjavacodeptit;
import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        System.out.println(new BigInteger(sc.next(),10).subtract(new BigInteger(sc.next())).toString());
    }
}
