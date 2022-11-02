package runjavacodeptit;
import java.util.AbstractMap;
import java.util.Scanner;
import java.util.LinkedList;
import java.util.Map;
import java.util.Queue;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    public static String toLeft(String s) {
        StringBuilder ans = new StringBuilder(s);
        ans.setCharAt(0, s.charAt(3));
        ans.setCharAt(1, s.charAt(0));
        ans.setCharAt(3, s.charAt(4));
        ans.setCharAt(4, s.charAt(1));
        return ans.toString();
    }
    public static String toRight(String s) {
        StringBuilder ans = new StringBuilder(s);
        ans.setCharAt(1, s.charAt(4));
        ans.setCharAt(2, s.charAt(1));
        ans.setCharAt(4, s.charAt(5));
        ans.setCharAt(5, s.charAt(2));
        return ans.toString();
    }
    public static void solve() {
        /*
              0 1 2
              3 4 5
        left: 3 0 2 right  0 4 1
              4 1 5        3 5 2
        */
        Queue<Map.Entry<String,Integer>> q = new LinkedList<>();
        String s1 = "", s2 = "";
        for(int i = 1; i <= 6; i++) {
            s1 += String.valueOf(sc.nextInt());
        }
        for(int i = 1; i <= 6; i++) {
            s2 += String.valueOf(sc.nextInt());
        }
        q.add(new AbstractMap.SimpleEntry<>(s1,0));
        while(!q.isEmpty()) {
            Map.Entry<String,Integer> p = q.poll(); 
            if(p.getKey().compareTo(s2) == 0) {
                System.out.println(p.getValue());
                return;
            }
            q.add(new AbstractMap.SimpleEntry<>(toLeft(p.getKey()),p.getValue()+1));
            q.add(new AbstractMap.SimpleEntry<>(toRight(p.getKey()),p.getValue()+1));
        }
    }
    public static void main(String[] args) {
        int t = 1;
        t = Integer.parseInt(sc.nextLine());
        for(int i = 1; i<= t; i++) {
            solve();
        }
    }

}