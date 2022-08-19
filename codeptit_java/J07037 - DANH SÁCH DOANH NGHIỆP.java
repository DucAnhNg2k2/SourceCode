package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static class DN {
        private String ma;
        private String ten;
        private int soSV;

        public DN() {
        }

        public DN(String ma, String ten, int soSV) {
            this.ma = ma;
            this.ten = ten;
            this.soSV = soSV;
        }
    }
    private static void solve() {
        try {
            BufferedReader br = new BufferedReader(new FileReader("DN.in"));
            int n = Integer.parseInt(br.readLine());
            List<DN> l = new ArrayList<>();
            for(int i = 1; i <= n; i++) {
                String ma = br.readLine();
                String ten = br.readLine();
                int soSV = Integer.parseInt(br.readLine());
                l.add(new DN(ma,ten,soSV));
            }
            Collections.sort(l, new Comparator<DN>() {
                @Override
                public int compare(DN m1,DN m2) {
                    return m1.ma.compareTo(m2.ma);
                }
            });
            for(DN i:l) {
                System.out.println(i.ma + " " + i.ten + " " + i.soSV);
            }
        }
	catch(IOException e) {
            
        }
        catch(Exception e) {
            
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