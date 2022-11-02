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
import java.util.Set;

public class Main {
    private static Scanner sc = new Scanner(System.in);
 
    public static void solve() {
        Map<Integer,Integer> m = new HashMap<>();
        try {
            Scanner sc = new Scanner(new FileReader("DATA.in"));
            while(sc.hasNext()) {
                int val = sc.nextInt();
                int cnt = 1;
                if(m.get(val) != null) {
                    cnt = m.get(val)+1;
                }
                m.put(val,cnt);
            }
            Set<Map.Entry<Integer, Integer>> s = m.entrySet();
            for(Map.Entry<Integer,Integer> i : s) {
                System.out.println(i.getKey() + " " + i.getValue());
            }
            
        }
        catch(IOException e) {
            
        }
    }
    public static void main(String[] args){
        int t = 1;
    //    t = Integer.parseInt(sc.nextLine());
        for(int i = 1; i<= t; i++) {
            solve();
        }
    }
}