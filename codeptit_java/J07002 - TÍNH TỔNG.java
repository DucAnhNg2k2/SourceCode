package runjavacodeptit;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Scanner;
import java.util.HashMap;
import java.util.Map;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static int getInt(String s) {
        int ans = 0;
        try {
            ans = Integer.parseInt(s);
        }
        catch(NumberFormatException e) {
            
        }
        finally {
            return ans;
        }
    }
    public static void solve() {
        long sum = 0;
        try {
            Scanner sc = new Scanner(new FileReader("DATA.in"));
            while(sc.hasNext()) {
                sum += getInt(sc.next());
            }
        }
        catch(IOException e) {
            
        }
        System.out.println(sum);
    }
    public static void main(String[] args){
        int t = 1;
    //    t = Integer.parseInt(sc.nextLine());
        for(int i = 1; i<= t; i++) {
            solve();
        }
    }
}