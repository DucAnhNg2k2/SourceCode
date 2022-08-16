package runjavacodeptit;
import java.util.Scanner;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        // TODO code application logic here
        double a = sc.nextDouble(), b = sc.nextDouble();
        if(a == 0 && b != 0) {
            System.out.println("VN");
        }
        else if(a == 0 && b == 0) {
            System.out.println("VSN");
        }
        else {
            System.out.printf("%.2f",-b/a);
        }
    }
}
