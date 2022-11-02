package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
	int t = 1;
        t = Integer.parseInt(sc.nextLine());
        Map<Integer,Integer> m = new HashMap<>();
        Map<Integer,Integer> s = new HashMap<>();
	for(int T = 1; T <= t; T++) {
            int n = sc.nextInt();
            ArrayList<Integer> a = new ArrayList<>();
            for(int i = 1; i <= n; i++) {
                int x = sc.nextInt();
                a.add(x);
                Integer dem = m.get(x);
                if(dem == null) {
                    dem = 0;
                }
                m.put(x,dem+1);
                dem = s.get(x);
                if(dem == null) {
                    s.put(x,i);
                }
            }
            Collections.sort(a, new Comparator<Integer>() {
                @Override
                public int compare(Integer o1, Integer o2) {
                    if(m.get(o1) < m.get(o2)) {
                        return 1;
                    }
                    if(m.get(o1) == m.get(o2)) {
                        if(s.get(o1) > s.get(o2)) {
                            return 1;
                        }
                    }
                    return -1;
                }
            });
            for(Integer i: a) {
                System.out.print(i + " ");
            }
            System.out.println("");
	}
    }
}