package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {

    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        WordSet s1 = new WordSet(in.nextLine());
        WordSet s2 = new WordSet(in.nextLine());
        System.out.println(s1.union(s2));
        System.out.println(s1.intersection(s2));
    }
//    public static void main(String[] args) {
//	int t = 1;
//        t = Integer.parseInt(sc.nextLine());
//	for(int i = 1; i <= t; i++) {
//            solve();
//	}
//    }
}
class WordSet {
    public String[] str;
    WordSet(String s) {
        str = s.trim().split("\\s++");
        for(int i = 0; i < str.length; i++) 
            str[i] = str[i].toLowerCase();
    }
    public String union(WordSet a) {
        Set<String> s = new TreeSet<>();
        for(int i = 0 ; i < this.str.length; i++) {
            s.add(this.str[i]);
        }
        for(int i = 0 ; i < a.str.length; i++) {
            s.add(a.str[i]);
        }
        String ans = "";
        for(String i: s) {
            ans += i + " ";
        }
        return ans;
    }
    public String intersection(WordSet a) {
        Set<String> s = new TreeSet<>();
        for(int i = 0; i < str.length; i++) {
            for(int j = 0; j < a.str.length; j++) {
                if(str[i].compareTo(a.str[j]) == 0) {
                    s.add(this.str[i]);
                }
            }
        }
        String ans = "";
        for(String i: s) {
            ans += i + " ";
        }
        return ans;
    }
}