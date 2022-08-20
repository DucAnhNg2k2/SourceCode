package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static class WordSet {
        String ans = "";
        WordSet(String input) {
            Set<String> s = new TreeSet<>();
            try {
                Scanner sc = new Scanner(new FileReader("VANBAN.in"));
                while(sc.hasNext()) {
                    s.add(sc.next().toLowerCase());
                }
                for(String i:s) {
                    ans = ans + i + "\n";
                }
            }
            catch(IOException e) {
            
            }
        }
        @Override
        public String toString() {
            return ans;
        }
    }
    private static void solve() {
//        Set<String> s = new TreeSet<>();
//        try {
//            Scanner sc = new Scanner(new FileReader("DATA.in"));
//            while(sc.hasNext()) {
//                s.add(sc.next().toLowerCase());
//            }
//            for(String i:s) {
//                System.out.println(i);
//            }
//        }
//	catch(IOException e) {
//            
//        }
    }
    
    public static void main(String[] args) throws IOException {
        WordSet ws = new WordSet("VANBAN.in");
        System.out.println(ws);
    }
    
//    public static void main(String[] args) {
//	int t = 1;
//    //    t = Integer.parseInt(sc.nextLine());
//	for(int i = 1; i <= t; i++) {
//            solve();
//	}
//    }
}