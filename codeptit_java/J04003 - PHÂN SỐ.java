package runjavacodeptit;
import java.io.*;
import java.math.BigInteger;
import java.util.*;

class PhanSo {
    private long Tu;
    private long Mau;

    public long getTu() {
        return Tu;
    }

    public void setTu(long Tu) {
        this.Tu = Tu;
    }

    public long getMau() {
        return Mau;
    }

    public void setMau(long Mau) {
        this.Mau = Mau;
    }

    public PhanSo(long Tu, long Mau) {
        this.Tu = Tu;
        this.Mau = Mau;
    }
    
    public PhanSo ToiGian() {
        long gcd = Long.parseLong(new BigInteger(String.valueOf(Tu)).gcd(new BigInteger(String.valueOf(Mau))).toString());
        return new PhanSo(Tu/gcd, Mau/gcd);
    }
}
public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        PhanSo ps = new PhanSo(sc.nextLong(), sc.nextLong()).ToiGian();
        System.out.println(ps.getTu() + "/" + ps.getMau());
    }
    public static void main(String[] args) {
	int t = 1;
    //    t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}