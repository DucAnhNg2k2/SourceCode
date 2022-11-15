import java.io.File;
import java.util.*;
import java.io.*;

public class Main{
    private static Scanner sc;

    static {
        try {
            sc = new Scanner(new File("STRING.in"));
        } catch (FileNotFoundException e) {
            throw new RuntimeException(e);
        }
    }

    private static void solve() {
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();
        for(int i = 0; i < s1.length() - s2.length() + 1; i++) {
            if(s1.substring(i,i+s2.length()).compareTo(s2) == 0) {
                System.out.print((i+1) + " ");
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