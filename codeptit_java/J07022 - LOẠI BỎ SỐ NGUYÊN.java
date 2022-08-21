package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        try {
          Scanner sc = new Scanner(new FileReader("DATA.in"));
          ArrayList<String> arr = new ArrayList<>();
          while(sc.hasNext()) {
              String val = sc.next();
              try {
                  int num = Integer.parseInt(val);
              }
              catch(NumberFormatException e) {
                  arr.add(val);
              }
          }
          Collections.sort(arr);
          for(String i:arr) {
              System.out.print(i + " ");
          }
        }
        catch(IOException e) {
            
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