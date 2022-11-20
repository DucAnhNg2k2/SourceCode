import java.util.*;
import java.io.*;

public class Main{
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        int n = Integer.parseInt(sc.nextLine());
        String str[] = sc.nextLine().trim().split("\\s+");
        int idx = 0;
        int a[][] = new int[n+5][n+5];
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                a[i][j] = Integer.parseInt(str[idx]);
                idx += 1;
            }
        }
        int row = 1, col = 1;
        while( row <= n ) {
            System.out.print(a[row][col] + " ");
            if(row%2 == 1) {
                col += 1;
            }
            else {
                col -= 1;
            }
            if(col == 0 || col == n+1) {
                row += 1;
                if(row%2 == 0) {
                    col = n;
                }
                else {
                    col = 1;
                }
            }
        }
        System.out.println();
    }

    public static void main(String[] args)  {
        int Tsolve = 1;
        Tsolve = Integer.parseInt(sc.nextLine());
        for (int i = 1; i <= Tsolve; i++) {
            solve();
        }
    }
}