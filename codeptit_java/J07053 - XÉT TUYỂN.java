package runjavacodeptit;
import java.io.*;
import java.util.*;

class XetTuyen {
    private static int ID = 1;
    private String maThiTuyen;
    private String hoTen;
    private String ngaySinh;
    private double diemLyThuyet;
    private double diemThucHanh;
    private int ketQua;
    private int tuoi;

    public XetTuyen() {
        maThiTuyen = String.valueOf(ID);
        if(maThiTuyen.length() < 2) maThiTuyen = "0" + maThiTuyen;
        maThiTuyen = "PH" + maThiTuyen;
        ID++;
    }
    public static int getID() {
        return ID;
    }

    public static void setID(int ID) {
        XetTuyen.ID = ID;
    }

    public String getMaThiTuyen() {
        return maThiTuyen;
    }

    public void setMaThiTuyen(String maThiTuyen) {
        this.maThiTuyen = maThiTuyen;
    }

    public String getHoTen() {
        return hoTen;
    }

    public void setHoTen(String hoTen) {
        this.hoTen = chuanhoaTen(hoTen);
    }

    public String getNgaySinh() {
        return ngaySinh;
    }

    public void setNgaySinh(String ngaySinh) {
        this.ngaySinh = chuanhoaNgaySinh(ngaySinh);
    }

    public double getDiemLyThuyet() {
        return diemLyThuyet;
    }

    public void setDiemLyThuyet(double diemLyThuyet) {
        this.diemLyThuyet = diemLyThuyet;
    }

    public double getDiemThucHanh() {
        return diemThucHanh;
    }

    public void setDiemThucHanh(double diemThucHanh) {
        this.diemThucHanh = diemThucHanh;
    }

    public int getKetQua() {
        return ketQua;
    }

    public void setKetQua() {
        double _ketQua = (diemLyThuyet + diemThucHanh) / 2;
        if(diemLyThuyet >= 8 && diemThucHanh >= 8) _ketQua += 1;
        else if(diemLyThuyet >= 7.5 && diemThucHanh >= 7.5) _ketQua += 0.5;
        _ketQua = Math.round(_ketQua);
        if(_ketQua > 10) _ketQua = 10;
        ketQua = (int) _ketQua;
    }

    public int getTuoi() {
        return tuoi;
    }

    public void setTuoi(int tuoi) {
        this.tuoi = tuoi;
    }
    
    private String chuanhoaTen(String name) {
        String []str = name.trim().split("\\s+");
        String ans = "";
        for(int i = 0; i < str.length; i++) {
            StringBuilder s = new StringBuilder(str[i].toLowerCase());
            s.setCharAt(0, Character.toUpperCase(s.charAt(0)));
            ans += s.toString() + " ";
        }
        return ans;
    }
    private String chuanhoaNgaySinh(String birthday) {
        // dd/mm/yyyy
        if(birthday.charAt(2) != '/') {
            birthday = "0" + birthday;
        }
        if(birthday.charAt(5) != '/') {
            birthday = birthday.substring(0, 3) + "0" + birthday.substring(3,birthday.length());
        }
        while(birthday.length() < 10) {
            birthday = birthday.substring(0, 6) + "0" + birthday.substring(6,birthday.length());
        }
        return birthday;
    }
    
    @Override
    public String toString() {
        String ans = "";
        ans += maThiTuyen + " ";
        ans += hoTen;
        ans += String.valueOf(2021-Integer.parseInt(ngaySinh.substring(6, ngaySinh.length()))) + ' ';
        ans += String.valueOf(ketQua) + ' ';
        if(ketQua < 5) {
            ans += "Truot";
        }
        else if(ketQua <= 6) {
            ans += "Trung binh";
        }
        else if(ketQua <= 7) {
            ans += "Kha";
        }
        else if(ketQua <= 8) {
            ans += "Gioi";
        }
        else {
            ans += "Xuat sac";
        }
        return ans;
    }

}
public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        try {
            Scanner sc = new Scanner(new FileReader("XETTUYEN.in"));
            int n = Integer.parseInt(sc.nextLine());
            ArrayList<XetTuyen> arr = new ArrayList<XetTuyen>();
            for(int i = 1; i <= n; i++) {
                XetTuyen o = new XetTuyen();
                o.setHoTen(sc.nextLine());
                o.setNgaySinh(sc.nextLine());
                o.setDiemLyThuyet(Double.parseDouble(sc.nextLine()));
                o.setDiemThucHanh(Double.parseDouble(sc.nextLine()));
                o.setKetQua();
                arr.add(o);
            }
            for(XetTuyen i: arr) {
                System.out.println(i);
            }
        }
        catch(FileNotFoundException e) {
           System.out.println(e);
        }
        catch(Exception e) {
            System.out.println(e);
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