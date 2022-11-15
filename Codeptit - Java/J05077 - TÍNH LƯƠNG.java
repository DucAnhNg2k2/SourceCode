import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.*;

class KhachHang {
    public String maNV;
    public String tenNV;
    public Long luongcoban;
    public Long songaycong;

    public KhachHang(String maNV, String tenNV,Long luongcoban, Long songaycong) {
        this.maNV = maNV;
        this.tenNV = tenNV;
        this.luongcoban = luongcoban;
        this.songaycong = songaycong;
    }
}

public class Main {
    public static void main (String[] args) throws FileNotFoundException {
        Scanner sc = null;
        sc = new Scanner(System.in);
     //   sc = new Scanner(new File("DATA.in"));
        Map<String,String> m = new HashMap<>();
        int n = Integer.parseInt(sc.nextLine());
        for(int i = 1; i <= n; i++) {
            String s = sc.nextLine();
            String maphongban = String.valueOf(s.charAt(0)) + String.valueOf(s.charAt(1));
            String[] str = s.split("\\s+");
            String tenphongban = "";
            for (int j = 1; j < str.length; j++) {
                tenphongban += str[j] + " ";
            }
            m.put(maphongban, tenphongban);
        }
        n = Integer.parseInt(sc.nextLine());
        for(int i = 1; i <= n; i++) {
            String maNV = sc.nextLine();
            String tenNV = sc.nextLine();
            Long luongcoban = Long.parseLong(sc.nextLine());
            Long songaycong = Long.parseLong(sc.nextLine());
            KhachHang kh = new KhachHang(maNV,tenNV,luongcoban,songaycong);
            String phanloaiNV = maNV.substring(0,1);
            long sonamCT = Long.parseLong(maNV.substring(1,3));
            String phongban = maNV.substring(3,5);
            long hesonhan = 0;
            if(phanloaiNV.compareTo("A") == 0) {
                if(sonamCT > 16) hesonhan = 20;
                else if(sonamCT >= 9) hesonhan = 14;
                else if(sonamCT >= 4) hesonhan = 12;
                else if(sonamCT >= 1) hesonhan = 10;
            }
            if(phanloaiNV.compareTo("B") == 0) {
                if(sonamCT > 16) hesonhan = 16;
                else if(sonamCT >= 9) hesonhan = 13;
                else if(sonamCT >= 4) hesonhan = 11;
                else if(sonamCT >= 1) hesonhan = 10;
            }
            if(phanloaiNV.compareTo("C") == 0) {
                if(sonamCT > 16) hesonhan = 14;
                else if(sonamCT >= 9) hesonhan = 12;
                else if(sonamCT >= 4) hesonhan = 10;
                else if(sonamCT >= 1) hesonhan = 9;
            }
            if(phanloaiNV.compareTo("D") == 0) {
                if(sonamCT > 16) hesonhan = 13;
                else if(sonamCT >= 9) hesonhan = 11;
                else if(sonamCT >= 4) hesonhan = 9;
                else if(sonamCT >= 1) hesonhan = 8;
            }
            System.out.println(kh.maNV + " " + kh.tenNV + " " + m.get(phongban) + " " + kh.luongcoban * kh.songaycong * hesonhan * 1000);
        }
    }
}