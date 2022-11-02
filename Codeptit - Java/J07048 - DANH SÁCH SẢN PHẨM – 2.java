package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static class SanPham {
       public String ma;
       public String ten;
       public int giaBan;
       public int baoHanh;

        public SanPham(String ma, String ten, int giaBan, int baoHanh) {
            this.ma = ma;
            this.ten = ten;
            this.giaBan = giaBan;
            this.baoHanh = baoHanh;
        }
        
    }
    private static void solve() {
        ArrayList<SanPham> sp = new ArrayList<>();
        try {
            BufferedReader br = new BufferedReader(new FileReader("SANPHAM.in"));
            int n = Integer.parseInt(br.readLine());
            for(int i = 1; i <= n; i++) {
                String ma = br.readLine();
                String ten = br.readLine();
                int giaBan = Integer.parseInt(br.readLine());
                int baoHanh = Integer.parseInt(br.readLine());
                sp.add(new SanPham(ma, ten, giaBan, baoHanh));
            }
            Collections.sort(sp, new Comparator<SanPham>() {
                @Override
                public int compare(SanPham a,SanPham b) {
                    if(a.giaBan == b.giaBan) {
                        return a.ma.compareTo(b.ma);
                    }
                    else if(a.giaBan > b.giaBan) return -1;
                    return 1;
                }
            });
            for(SanPham i:sp) {
                System.out.println(i.ma + " " + i.ten + " " + i.giaBan + " " + i.baoHanh);
            }
        }
	catch(IOException e) {
            
        }
    }

    public Main() {
    }

    
    public static void main(String[] args) {
	int t = 1;
    //    t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}