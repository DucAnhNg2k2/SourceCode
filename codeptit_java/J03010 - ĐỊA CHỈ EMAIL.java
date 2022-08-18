package runjavacodeptit;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static ArrayList<String> e = new ArrayList<String>();
    public static void solve() {
        String[] ans = new String(sc.nextLine()).trim().split("\\s+");
        for(int i = 0; i < ans.length; i++) {
            ans[i] = ans[i].toLowerCase();
            if(i != ans.length-1) {
                ans[i] = String.valueOf(ans[i].charAt(0));
            }
        }
        StringBuilder s = new StringBuilder("");
        s.append(ans[ans.length-1]);
        for(int i = 0; i < ans.length-1; i++) {
             s.append(ans[i]);
        }
        char dem = '1';
        for (int i = 0; i < e.size(); i++) {
            if(e.get(i).compareTo(s.toString()) == 0) {
                dem++;
            }
        }
        e.add(s.toString());
        if(dem != '1') s.append(dem);
        System.out.println(s.append("@ptit.edu.vn"));
    }
    public static void main(String[] args) {
        int t = 1;
        t = Integer.parseInt(sc.nextLine());
        for(int i = 1; i<= t; i++) {
            solve();
        }
    }
}