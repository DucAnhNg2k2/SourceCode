import java.util.*;
import java.io.*;

public class Main{
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        int n = sc.nextInt();
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                int x = sc.nextInt();
                if(x == 1 && i <= j) {
                    System.out.println("(" + i + "," + j + ")");
                }
            }
        }
    }

    public static void main(String[] args)  {
        int Tsolve = 1;
    //    Tsolve = Integer.parseInt(sc.nextLine());
        for (int i = 1; i <= Tsolve; i++) {
            solve();
        }
    }
}