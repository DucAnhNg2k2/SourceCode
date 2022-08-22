package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static class LoaiPhong implements Comparable<LoaiPhong> {
        public String loaiPhong;
        public String tenPhong;
        public String donGia;
        public String phiPhucVu;

        public LoaiPhong(String s) {
            String[] str = s.split("\\s+");
            loaiPhong = str[0];
            tenPhong = str[1];
            donGia = str[2];
            phiPhucVu = str[3];
        }
        @Override
        public String toString() {
            String ans = "";
            ans = loaiPhong + " " + tenPhong + " " + donGia + " " + phiPhucVu;
            return ans;
        }
        @Override
        public int compareTo(LoaiPhong a) {
            return this.tenPhong.compareTo(a.tenPhong);
        }
    }
//    private static void solve() {
//        try {
//            Scanner sc = new Scanner(new FileReader("PHONG.in"));
//            int n = Integer.parseInt(sc.nextLine());
//            ArrayList<Phong> a = new ArrayList<>();
//            for(int i = 1; i <= n; i++) {
//                String loaiPhong = sc.next();
//                String tenPhong = sc.next();
//                String donGia = sc.next();
//                String phiPhucVu = sc.next();
//                a.add(new Phong(loaiPhong, tenPhong, donGia, phiPhucVu));
//            }
//            Collections.sort(a,new Comparator<Phong>() {
//                @Override
//                public int compare(Phong a,Phong b) {
//                    return a.tenPhong.compareTo(b.tenPhong);
//                }
//            });
//            for(Phong i: a) {
//                System.out.println(i.loaiPhong + " " + i.tenPhong + " " + i.donGia + " " + i.phiPhucVu);
//            }
//        }
//        catch(IOException e) {
//            
//        }
//    }
    
    public static void main(String[] args) throws IOException {
        ArrayList<LoaiPhong> ds = new ArrayList<>();
        Scanner in = new Scanner(new File("PHONG.in"));
        int n = Integer.parseInt(in.nextLine());
        while(n-->0){
            ds.add(new LoaiPhong(in.nextLine()));
        }
        Collections.sort(ds);
        for(LoaiPhong tmp : ds){
            System.out.println(tmp);
        }
    }
//    public static void main(String[] args) {
//	int t = 1;
//    //    t = Integer.parseInt(sc.nextLine());
//	for(int i = 1; i <= t; i++) {
//            solve();
//	}
//    }
}