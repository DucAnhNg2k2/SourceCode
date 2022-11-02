package runjavacodeptit;
import java.io.FileReader;
import java.io.IOException;
import java.util.Scanner;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    public static void solve() {
        try {
            FileReader fr = new FileReader("Hello.txt");
            int i;
            while((i= fr.read()) != -1) {
                System.out.print((char)i);
            }
        }
        catch(Exception e) {
            System.out.print("Error!");
        }
    }
    public static void main(String[] args) {
        int t = 1;
    //    t = sc.nextInt();
        for(int i = 1; i<= t; i++) {
            solve();
        }
    }
}
