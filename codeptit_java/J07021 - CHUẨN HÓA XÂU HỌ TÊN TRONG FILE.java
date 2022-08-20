package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void get(String s) {
        String[] str = s.trim().split("\\s+");
        for(String i : str) {
            StringBuilder a = new StringBuilder(i.toLowerCase());
            a.setCharAt(0,Character.toUpperCase(a.charAt(0)));
            System.out.print(a + " ");
        }
        System.out.println("");
    }
    private static void solve() {
        try {
            BufferedReader br = new BufferedReader(new FileReader("DATA.in"));
            String s;
            while((s = br.readLine()) != null) {
                if(s.compareTo("END") == 0) {
                    break;
                }
                get(s);
            }
        }
	catch(IOException e) {
            
        }
        catch(Exception e) {
            
        }
    }
	
    public static void main(String[] args) {
	int t = 1;
    //    t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}