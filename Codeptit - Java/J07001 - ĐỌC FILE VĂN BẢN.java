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
    public static void solve() throws IOException {
        Path p = Paths.get("DATA.in");
        FileReader fr = new FileReader(p.toString());
        int i;
        while((i = fr.read()) != -1) {
            System.out.print((char)i);
        }
    }
    public static void main(String[] args) throws IOException {
        int t = 1;
    //    t = Integer.parseInt(sc.nextLine());
        for(int i = 1; i<= t; i++) {
            solve();
        }
    }
}