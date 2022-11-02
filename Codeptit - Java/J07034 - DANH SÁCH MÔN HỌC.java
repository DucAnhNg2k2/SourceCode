package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static class MonHoc {
        private String ma;
        private String ten;
        private int soTinChi;

        public MonHoc() {
        }

        public MonHoc(String ma, String ten, int soTinChi) {
            this.ma = ma;
            this.ten = ten;
            this.soTinChi = soTinChi;
        }
    }
    private static void solve() {
        try {
            BufferedReader br = new BufferedReader(new FileReader("MONHOC.in"));
            int n = Integer.parseInt(br.readLine());
            List<MonHoc> l = new ArrayList<>();
            for(int i = 1; i <= n; i++) {
                String ma = br.readLine();
                String ten = br.readLine();
                int soTinChi = Integer.parseInt(br.readLine());
                l.add(new MonHoc(ma,ten,soTinChi));
            }
            Collections.sort(l, new Comparator<MonHoc>() {
                @Override
                public int compare(MonHoc m1,MonHoc m2) {
                    return m1.ten.compareTo(m2.ten);
                }
            });
            for(MonHoc i:l) {
                System.out.println(i.ma + " " + i.ten + " " + i.soTinChi);
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