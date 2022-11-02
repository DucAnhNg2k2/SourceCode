package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static boolean check(String s) {
        for(int i = 1; i < s.length(); i++) {
            if(s.charAt(i-1) > s.charAt(i)) {
                return false;
            }
        }
        return true;
    }
    private static class Number {
        public int val;
        public int cnt;
        public int idx;

        public Number(int val, int cnt, int idx) {
            this.val = val;
            this.cnt = cnt;
            this.idx = idx;
        }
        
    }
    private static void solve() {
       ArrayList<Number> l = new ArrayList<>();
       while(sc.hasNext()) {
           String s = sc.next();
           if(check(s)) {
                int val = Integer.parseInt(s);
                boolean check = true;
                for(int i = 0; i < l.size(); i++) {
                    if(val == l.get(i).val) {
                        Number num = l.get(i);
                        l.set(i, new Number(num.val,num.cnt+1,num.idx));
                        check = false;
                    }
                }
                if(check) {
                    l.add(new Number(val,1,l.size()+1));
                }
           } 
       }
       Collections.sort(l, new Comparator<Number>() {
          @Override
          public int compare(Number a,Number b) {
              if(a.cnt == b.cnt) {
                  if(a.idx < b.idx) return -1;
                  return 1;
              }
              if(a.cnt > b.cnt) return -1;
              return 1;
          }
       });
       for(Number i:l) {
           System.out.println(i.val + " " + i.cnt);
       }
    }
    
    public static void main(String[] args) {
	int t = 1;
     //   t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}