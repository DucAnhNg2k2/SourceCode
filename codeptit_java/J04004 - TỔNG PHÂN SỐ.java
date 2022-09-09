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
    
    public PhanSo Sum(PhanSo otherPhanSo) {
        Long Tu = this.Tu * otherPhanSo.getMau() + this.Mau * otherPhanSo.getTu();
        Long Mau = this.Mau * otherPhanSo.getMau();
        return new PhanSo(Tu, Mau);
    }
    
    @Override
    public String toString() {
        String ans = String.valueOf(Tu) + "/" + String.valueOf(Mau);
        return ans;
    }
}
public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        PhanSo a = new PhanSo(sc.nextLong(), sc.nextLong());
        PhanSo b = new PhanSo(sc.nextLong(), sc.nextLong());
        System.out.println(a.Sum(b).ToiGian());
    }
    public static void main(String[] args) {
	int t = 1;
    //    t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}