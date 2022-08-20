package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static class ThiSinh {
        public String ma;
        public String ten;
        public float diemToan;
        public float diemLy;
        public float diemHoa;
        public float diemUuTien;

        public ThiSinh(String ma, String ten, float diemToan, float diemLy, float diemHoa) {
            this.ma = ma;
            this.ten = chuanHoaHoTen(ten);
            this.diemToan = diemToan;
            this.diemLy = diemLy;
            this.diemHoa = diemHoa;
            
        }
        
        public float tinhDiem() {
            float sum = diemToan*2 + diemLy + diemHoa;
            if(ma.charAt(2) == '1') {
                diemUuTien = 0.5f;
            }
            if(ma.charAt(2) == '2') {
                diemUuTien = 1;
            }
            if(ma.charAt(2) == '3') {
                diemUuTien = 2.5f;
            }
            return sum + diemUuTien;
        }
        private String chuanHoaHoTen(String name) {
            String[] str = name.trim().split("\\s+");
            String ans = "";
            for(String i:str) {
                StringBuilder sb = new StringBuilder(i.toLowerCase());
                sb.setCharAt(0, Character.toUpperCase(sb.charAt(0)));
                ans += sb.toString();
                ans += " ";
            }
            ans = ans.substring(0, ans.length()-1);
            return ans;
        }
    }
    private static void inF(float n) {
        if(n == (int)n) {
            System.out.print((int)n);
        }
        else {
            System.out.printf("%.1f",n);
        }
    }
    private static void solve() {
        ArrayList<ThiSinh> ts = new ArrayList<>();
        try {
            BufferedReader br = new BufferedReader(new FileReader("THISINH.in"));
            int n = Integer.parseInt(br.readLine());
            for(int i = 1; i <= n; i++) {
                String ma = br.readLine();
                String ten = br.readLine();
                float diemToan = Float.parseFloat(br.readLine());
                float diemLy = Float.parseFloat(br.readLine());
                float diemHoa = Float.parseFloat(br.readLine());
                ts.add(new ThiSinh(ma,ten,diemToan,diemLy,diemHoa));
            }
            int chiTieu = Integer.parseInt(br.readLine());
            Collections.sort(ts, new Comparator<ThiSinh>() {
                @Override
                public int compare(ThiSinh a,ThiSinh b) {
                    if(a.tinhDiem() > b.tinhDiem()) {
                        return -1;
                    }
                    else if(a.tinhDiem() == b.tinhDiem()) {
                        return a.ma.compareTo(b.ma);
                    }
                    return 1;
                }
            });
            float diemChiTieu = ts.get(chiTieu-1).tinhDiem();
            System.out.printf("%.1f\n",diemChiTieu);
            for(ThiSinh i:ts) {
                System.out.print(i.ma + " ");
                System.out.print(i.ten + " ");
                inF(i.diemUuTien);
                System.out.print(" ");
                inF(i.tinhDiem());
                System.out.print(" ");
                if(i.tinhDiem() >= diemChiTieu) {
                    System.out.println("TRUNG TUYEN");
                }
                else {
                    System.out.println("TRUOT");
                }
            }
        }
	catch(IOException e) {
            
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