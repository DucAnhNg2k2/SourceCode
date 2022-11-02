package runjavacodeptit;
import java.util.Scanner;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        // TODO code application logic here
        int a = sc.nextInt(), b = sc.nextInt();
        if(a <= 0 || b <= 0 ) System.out.println("0");
        else {
            System.out.println((a+b)*2 + " " + a*b);
        }
    }
}
