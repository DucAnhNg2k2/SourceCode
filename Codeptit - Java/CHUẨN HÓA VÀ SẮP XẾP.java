import java.io.File;
import java.util.*;
import java.io.*;

public class Main{
    private static void solve() {
        try {
            BufferedReader br = new BufferedReader(new FileReader("DANHSACH.in"));
            String s;
            ArrayList<String> a = new ArrayList<>();
            while((s = br.readLine()) != null) {
                String []str = s.trim().split("\\s+");
                String ans = "";
                for(String i: str) {
                    StringBuilder sb = new StringBuilder(i.toLowerCase());
                    sb.setCharAt(0,Character.toUpperCase(sb.charAt(0)));
                    ans += sb.toString() + " ";
                }
                a.add(ans);
            }
            Collections.sort(a, new Comparator<String>() {
                @Override
                public int compare(String o1, String o2) {
                    String []a = o1.split("\\s+");
                    String []b = o2.split("\\s+");
                    if(a[a.length-1].compareTo(b[b.length-1]) == 0) {
                        if(a[0].compareTo(b[0]) == 0) {
                            String s1 = ""; for(int i = 1; i < a.length-1; i++) s1 += a[i];
                            String s2 = ""; for(int i = 1; i < b.length-1; i++) s2 += b[i];
                            return s1.compareTo(s2);
                        }
                        return a[0].compareTo(b[0]);
                    }
                    return a[a.length-1].compareTo(b[b.length-1]);
                }
            });
            for(String i: a) {
                System.out.println(i);
            }
        }
        catch(Exception e) {
            System.out.println(e);
        }
    }

    public static void main(String[] args)  {
        Scanner sc = new Scanner(System.in);
        int Tsolve = 1;
        //    Tsolve = Integer.parseInt(sc.nextLine());
        for (int i = 1; i <= Tsolve; i++) {
            solve();
        }
    }
}