package runjavacodeptit;
import java.io.*;
import java.util.*;
import java.util.logging.Level;
import java.util.logging.Logger;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static class MatHang {
        public String id;
        public String TenHang;
        public long SoLuong;
        public long DonGia;
        public long ChietKhau;
        public long ThanhTien;
        
        public void Nhap() {
            TenHang = sc.nextLine();
            SoLuong = Long.parseLong(sc.nextLine());
            DonGia = Long.parseLong(sc.nextLine());
            if(SoLuong > 10) {
                ChietKhau = SoLuong * DonGia * 5/100;
            }
            else if(SoLuong >= 8) {
                ChietKhau = SoLuong * DonGia * 2/100;
            }
            else if(SoLuong >= 5) {
                ChietKhau = SoLuong * DonGia * 1/100;
            }
            else ChietKhau = 0;
            ThanhTien = SoLuong * DonGia - ChietKhau;
        }
        public void In() {
            System.out.println(id + " " + TenHang + " " + ChietKhau + " " + ThanhTien);
        }
    }
    private static void solve() {
        int n = Integer.parseInt(sc.nextLine());
        ArrayList<MatHang> a = new ArrayList<>();
        Map<String,Integer> map = new HashMap<>();
        for(int i = 1; i <= n; i++) {
            MatHang m = new MatHang();
            m.Nhap();
            String[] s = m.TenHang.split("\\s+");
            String code = String.valueOf(s[0].charAt(0)).toUpperCase() + String.valueOf(s[1].charAt(0)).toUpperCase();
            if(map.get(code) == null) {
                map.put(code, 1);
            }
            else map.put(code, map.get(code)+1);
            String id = String.valueOf(map.get(code));
            if(id.length() == 1) id = "0" + id;
            m.id = code + id;
            a.add(m);
        }
        for(MatHang i : a) {
            i.In();
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