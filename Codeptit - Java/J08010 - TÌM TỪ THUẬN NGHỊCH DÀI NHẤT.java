package runjavacodeptit;
import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static boolean check(String s) {
        for(int i = 0, j = s.length()-1; i < j; i++,j--) {
            if(s.charAt(i) != s.charAt(j)) return false;
        }
        return true;
    }
    private static void solve() {
        int size = 0;
        ArrayList<Map.Entry<String,Integer>> a = new ArrayList<>();
        while(sc.hasNext()) {
            String val = sc.next();
//            if(val.toString().compareTo("0") == 0) {
//                break;
//            }
            if(check(val)) {
                if(val.length() == size) {
                    boolean check = true;
                    for(int i = 0; i < a.size(); i++) {
                        if(a.get(i).getKey().compareTo(val) == 0) {
                            String key = a.get(i).getKey();
                            Integer value = a.get(i).getValue();
                            a.set(i, new AbstractMap.SimpleEntry<>(key,value+1));
                            check = false;
                            break;
                        }
                    }
                    if(check) a.add(new AbstractMap.SimpleEntry<>(val,1));
                }
                else if(val.length() > size) {
                    a.clear();
                    a.add(new AbstractMap.SimpleEntry<>(val,1));
                }
            //    System.out.println(val);
                size = Math.max(size, val.length());
            }
        }
        for(Map.Entry<String,Integer> i : a) {
            System.out.println(i.getKey() + " " + i.getValue());
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