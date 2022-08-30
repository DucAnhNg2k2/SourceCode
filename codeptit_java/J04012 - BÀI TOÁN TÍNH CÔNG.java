package runjavacodeptit;

import java.util.Scanner;

class TinhCong{
    public String HoVaTen;
    public int LuongCoBan;
    public int SoNgayCong;
    public String ChucVu;
}
public class Main{
    private static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        TinhCong a = new TinhCong();
        a.HoVaTen = sc.nextLine();
        a.LuongCoBan = Integer.parseInt(sc.nextLine());
        a.SoNgayCong = Integer.parseInt(sc.nextLine());
        a.ChucVu = sc.nextLine();
        long LuongThang = (long)a.LuongCoBan * a.SoNgayCong;
        long Thuong = 0;
        long PhuCap = 0;
        if(a.SoNgayCong >= 25) Thuong = LuongThang * 20 / 100;
        else if(a.SoNgayCong >= 22) Thuong = LuongThang * 10 / 100;
        
        if(a.ChucVu.compareTo("GD") == 0) PhuCap = 250000;
        if(a.ChucVu.compareTo("PGD") == 0) PhuCap = 200000;
        if(a.ChucVu.compareTo("TP") == 0 ) PhuCap = 180000;
        if(a.ChucVu.compareTo("NV") == 0 ) PhuCap = 150000;
        System.out.println("NV01 " + a.HoVaTen + " " + LuongThang + " "+ Thuong + " " + PhuCap + " " + (LuongThang + Thuong + PhuCap));
        
    }
}