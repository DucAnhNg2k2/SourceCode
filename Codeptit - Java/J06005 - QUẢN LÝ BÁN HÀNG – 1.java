import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.TreeSet;

class KhachHang {
    private static int count = 0;
    public String maKH;
    public String tenKH;
    public String gioitinh;
    public String ngaysinh;
    public String diachi;

    public KhachHang(String tenKH, String gioitinh, String ngaysinh, String diachi) {
        count++;
        String id = String.valueOf(count);
        while(id.length() < 3) id = "0" + id;

        this.maKH = "KH" + id;
        this.tenKH = tenKH;
        this.gioitinh = gioitinh;
        this.ngaysinh = ngaysinh;
        this.diachi = diachi;
    }
}

class MatHang {
    private static int count = 0;
    public String maMH;
    public String tenMH;
    public String donvitinh;
    public Long giamua;
    public Long giaban;

    public MatHang(String tenMH, String donvitinh, Long giamua, Long giaban) {
        count++;
        String id = String.valueOf(count);
        while(id.length() < 3) id = "0" + id;

        this.maMH = "MH" + id;
        this.tenMH = tenMH;
        this.donvitinh = donvitinh;
        this.giamua = giamua;
        this.giaban = giaban;
    }
}

class HoaDon {
    public String mKH;
    public String mMH;
    public Integer soluong;

    public HoaDon(String mKH, String mMH, Integer soluong) {
        this.mKH = mKH;
        this.mMH = mMH;
        this.soluong = soluong;
    }
}
public class Main {
    public static void main (String[] args) throws FileNotFoundException {
        Scanner sc = null;
        sc = new Scanner(System.in);
     //   sc = new Scanner(new File("DATA.in"));
        Integer n = Integer.parseInt(sc.nextLine());
        ArrayList<KhachHang> aKH = new ArrayList<>();
        for(Integer i = 1; i <= n; i++) {
            String tenKH = sc.nextLine();
            String gioitinh = sc.nextLine();
            String ngaysinh = sc.nextLine();
            String diachi = sc.nextLine();
            KhachHang a = new KhachHang(tenKH,gioitinh,ngaysinh,diachi);
            aKH.add(a);
        }
        Integer m = Integer.parseInt(sc.nextLine());
        ArrayList<MatHang> aMH = new ArrayList<>();
        for(Integer i = 1; i <= m; i++) {
            String tenMH = sc.nextLine();
            String donvitinh = sc.nextLine();
            Long giamua = Long.parseLong(sc.nextLine());
            Long giaban = Long.parseLong(sc.nextLine());
            aMH.add(new MatHang(tenMH,donvitinh,giamua,giaban));
        }
        Integer k = Integer.parseInt(sc.nextLine());
        ArrayList<HoaDon> aHD = new ArrayList<>();
        for(Integer i = 1; i <= k; i++) {
            String []str = sc.nextLine().split("\\s+");
            String mKH = str[0];
            String mMH = str[1];
            Integer soluong = Integer.parseInt(str[2]);
            aHD.add(new HoaDon(mKH,mMH,soluong));
        }
        Integer idx = 0;
        for(HoaDon iHD: aHD) {
            idx++;
            String id = String.valueOf(idx);
            while(id.length() < 3) id = "0" + id;
            id = "HD" + id;
            for(KhachHang iKH: aKH) {
                for(MatHang iMH: aMH) {
                    if(iHD.mKH.compareTo(iKH.maKH) == 0 && iHD.mMH.compareTo(iMH.maMH) == 0) {
                        System.out.println(id + " " + iKH.tenKH + " " + iKH.diachi + " " + iMH.tenMH + " " + iMH.donvitinh + " " + iMH.giamua + " " + iMH.giaban + " " + iHD.soluong + " " + (iHD.soluong)*(iMH.giaban));
                    }
                }
            }
        }
    }
}