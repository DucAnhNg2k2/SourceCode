import java.io.File;
import java.util.*;
import java.io.*;

class MonHoc {
    public String maMH;
    public String tenMH;
    public int soTC;
    public String lythuyet;
    public String thuchanh;

    public MonHoc(String maMH, String tenMH, int soTC, String lythuyet, String thuchanh) {
        this.maMH = maMH;
        this.tenMH = tenMH;
        this.soTC = soTC;
        this.lythuyet = lythuyet;
        this.thuchanh = thuchanh;
    }
}
public class Main{
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        try {
            sc = new Scanner(new File("MONHOC.in"));
            int n = Integer.parseInt(sc.nextLine());
            ArrayList<MonHoc> a = new ArrayList<>();
            for(int i = 1; i <= n; i++) {
                String maMH = sc.nextLine();
                String tenMH = sc.nextLine();
                int soTC = Integer.parseInt(sc.nextLine());
                String lythuyet = sc.nextLine();
                String thuchanh = sc.nextLine();
                if(thuchanh.compareTo("Truc tuyen") == 0 || thuchanh.indexOf(".ptit.edu.vn") != -1) {
                    a.add(new MonHoc(maMH,tenMH,soTC,lythuyet,thuchanh));
                }
            }
            Collections.sort(a, new Comparator<MonHoc>() {
                @Override
                public int compare(MonHoc o1, MonHoc o2) {
                    return o1.maMH.compareTo(o2.maMH);
                }
            });
            for(MonHoc i: a) {
                System.out.println(i.maMH + " " + i.tenMH + " " + i.soTC + " " + i.lythuyet + " " + i.thuchanh);
            }
        }
        catch(Exception e) {
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