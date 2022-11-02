package runjavacodeptit;
import java.io.*;
import java.util.*;

class BongDa {
    public String maCLB;
    public String tenCLB;
    public int GiaVe;

    public BongDa(String maCLB, String tenCLB, int GiaVe) {
        this.maCLB = maCLB;
        this.tenCLB = tenCLB;
        this.GiaVe = GiaVe;
    }

    public BongDa() {
    }
}

class BongDa1 {
    public String maTranDau;
    public int soNguoi;

    public BongDa1(String maTranDau, int soNguoi) {
        this.maTranDau = maTranDau;
        this.soNguoi = soNguoi;
    }

    public BongDa1() {
    }
    
}
public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
       int n = Integer.parseInt(sc.nextLine());
       ArrayList<BongDa> arr = new ArrayList<>();
       for(int i = 1; i <= n; i++) {
           arr.add(new BongDa(sc.nextLine(), sc.nextLine(), Integer.parseInt(sc.nextLine())));
       }
       int m = Integer.parseInt(sc.nextLine());
       ArrayList<BongDa1> arr1 = new ArrayList<>();
       for(int i = 1; i <= m; i++) {
           arr1.add(new BongDa1(sc.next(), Integer.parseInt(sc.next())));
       }
       for(BongDa1 i1: arr1) {
           for(BongDa i: arr) {
               if(i.maCLB.charAt(0) == i1.maTranDau.charAt(1) && i.maCLB.charAt(1) == i1.maTranDau.charAt(2)) {
                   System.out.println(i1.maTranDau  + " " + i.tenCLB + " " + i.GiaVe* i1.soNguoi);
               }
            }
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