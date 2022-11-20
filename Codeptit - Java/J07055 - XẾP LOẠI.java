import java.util.*;
import java.io.*;

class SinhVien implements Comparable<SinhVien>{
    private static int ID;
    public String maSV;
    public String hoten;
    public float tongdiem;
    public String xeploai;
    private float diemLT;
    private float diemTH;
    private float diemThi;

    public SinhVien(String hoten, float diemLT, float diemTH, float diemThi) {
        ID++;
        maSV = String.valueOf(ID);
        while(maSV.length() < 2) {
            maSV = "0" + maSV;
        }
        this.maSV = "SV" + maSV;
        this.hoten = chuanHoaTen(hoten);
        this.diemLT = diemLT;
        this.diemTH = diemTH;
        this.diemThi = diemThi;
        this.tongdiem = (float) (diemLT * 0.25 + diemTH * 0.35 + diemThi * 0.4);
        if(tongdiem >= 8) xeploai = "GIOI";
        else if(tongdiem >= 6.5) xeploai = "KHA";
        else if(tongdiem >= 5) xeploai = "TRUNG BINH";
        else xeploai = "KEM";
    }

    private String chuanHoaTen(String s) {
        String str[] = s.trim().split("\\s+");
        String ans = "";
        for(String i: str) {
            StringBuilder sb = new StringBuilder(i.toLowerCase());
            sb.setCharAt(0,Character.toUpperCase(sb.charAt(0)));
            ans += sb.toString() + " ";
        }
        return ans;
    }

    @Override
    public int compareTo(SinhVien other) {
        if(this.tongdiem > other.tongdiem) {
            return -1;
        }
        return 1;
    }
}
public class Main{
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        try {
            sc = new Scanner(new File("BANGDIEM.in"));
            ArrayList<SinhVien> a = new ArrayList<>();
            int n = Integer.parseInt(sc.nextLine());
            for(int i = 1; i <= n; i++) {
                String name = sc.nextLine();
                float diemLT = Float.parseFloat(sc.nextLine());
                float diemTH = Float.parseFloat(sc.nextLine());
                float diemThi = Float.parseFloat(sc.nextLine());
                a.add(new SinhVien(name,diemLT,diemTH,diemThi));
            }
            Collections.sort(a);
            for(SinhVien i: a) {
                System.out.print(i.maSV + " " + i.hoten);
                System.out.printf("%.2f", i.tongdiem);
                System.out.println(" " + i.xeploai);
            }
        } catch (FileNotFoundException e) {
            System.out.println(e);
        }
    }

    public static void main(String[] args)  {
        int Tsolve = 1;
        //    Tsolve = Integer.parseInt(sc.nextLine());
        for (int i = 1; i <= Tsolve; i++) {
            solve();
        }
    }
}