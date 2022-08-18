package runjavacodeptit;
import java.util.Scanner;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    public static void solve() {
        String str = new String(sc.next());
        int dem = 0;
        for(int i = 0, j = str.length()-1; i < j; i++, j--) {
            if(str.charAt(i) != str.charAt(j)) {
                dem++;
            }
        }
        if(str.length()%2 == 0) {
            if(dem != 1) System.out.println("NO");
            else System.out.println("YES");
        }
        else {
            if(dem > 1) System.out.println("NO");
            else System.out.println("YES");
        }
    }
    public static void main(String[] args) {
        int t = 1;
        t = sc.nextInt();
        for(int i = 1; i<= t; i++) {
            solve();
        }
    }
}