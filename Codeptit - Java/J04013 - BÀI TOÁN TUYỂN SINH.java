package runjavacodeptit;

import java.util.Scanner;

class SinhVien{
    private String maSV;
    private String ten;
    private float diem1;
    private float diem2;
    private float diem3;
    public SinhVien(String maSV, String ten, float diem1, float diem2, float diem3){
        this.maSV = maSV;
        this.ten = ten;
        this.diem1 = diem1;
        this.diem2 = diem2;
        this.diem3 = diem3;
    }
    public float getDiem1() {
        return diem1;
    }
    public void setDiem1(float diem1) {
        this.diem1 = diem1;
    }
    public float getDiem2() {
        return diem2;
    }
    public void setDiem2(float diem2) {
        this.diem2 = diem2;
    }
    public float getDiem3() {
        return diem3;
    }
    public void setDiem3(float diem3) {
        this.diem3 = diem3;
    }
    public void solve(){
        String s = this.maSV.substring(2, 3);
        float sum = this.diem1 * 2 + this.diem2 + this.diem3;
        float sumAll = sum;
        if(s.compareTo("1") == 0) sumAll += 0.5;
        else if(s.compareTo("2") == 0) sumAll += 1;
        else sumAll += 2.5;
        String x;
        if(sumAll < 24) x = "TRUOT";
        else x = "TRUNG TUYEN";
        int sumT = (int)(sum);
        int ok1 = (int)(sumAll - sum);
        if((sumAll - sum) - ok1 == 0) System.out.print(this.maSV + " " + this.ten + " " + ok1 + " ");
        else System.out.print(this.maSV + " " + this.ten + " " + (sumAll - sum) + " ");
        
        if(sum - sumT != 0) System.out.printf("%.1f", sum);
        else System.out.print(sumT);
        System.out.print(" ");
        System.out.print(x);
    }
}
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        SinhVien sv = new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextFloat(), sc.nextFloat(), sc.nextFloat());
        sv.solve();
    }
}