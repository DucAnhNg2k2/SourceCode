package runjavacodeptit;
import java.io.*;
import java.math.BigInteger;
import java.util.*;

class ThiSinh {
    public String Ten;
    public String NgaySinh;
    public float DiemToan,DiemLy,DiemHoa,FullDiem;

    public ThiSinh(String Ten, String NgaySinh, float DiemToan, float DiemLy, float DiemHoa) {
        this.Ten = Ten;
        this.NgaySinh = NgaySinh;
        this.DiemToan = DiemToan;
        this.DiemLy = DiemLy;
        this.DiemHoa = DiemHoa;
        this.FullDiem = DiemToan + DiemLy + DiemHoa;
    }
    
}

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        ThiSinh ducanh = new ThiSinh(sc.nextLine(),sc.nextLine(),sc.nextFloat(),sc.nextFloat(),sc.nextFloat());
        System.out.print(ducanh.Ten + " " + ducanh.NgaySinh + " ");
        System.out.printf("%.1f\n",ducanh.FullDiem);
    }
    public static void main(String[] args) {
	int t = 1;
    //    t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}