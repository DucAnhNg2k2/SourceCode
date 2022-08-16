package runjavacodeptit;
import java.util.Scanner;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    public static void solve() {
        int n = sc.nextInt();
        for(int i = 2; i <= Math.sqrt(n); i++) {
            if(n%i == 0) {
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
    }
    public static void main(String[] args) {
        int t = 1;
        t = sc.nextInt();
        for(int i = 1; i<= t; i++) {
            solve();
        }
    }
}
