package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static class MatHang {
        public String maHang;
        public String tenHang;
        public String nhomHang;
        public float giaMua;
        public float giaBan;

        public MatHang(String maHang, String tenHang, String nhomHang, float giaMua, float giaBan) {
            this.maHang = maHang;
            this.tenHang = tenHang;
            this.nhomHang = nhomHang;
            this.giaMua = giaMua;
            this.giaBan = giaBan;
        }
        
    }
    private static void solve() {
        try {
            BufferedReader br = new BufferedReader(new FileReader("MATHANG.in"));
            int n = Integer.parseInt(br.readLine());
            ArrayList<MatHang> a = new ArrayList<>();
            for(int i = 1; i <= n; i++) {
                String maHang = String.valueOf(i);
                if(maHang.length() == 1) maHang = "MH0" + maHang;
                else maHang = "MH" + maHang;
                String tenHang = br.readLine();
                String nhomHang = br.readLine();
                float giaMua = Float.parseFloat(br.readLine());
                float giaBan = Float.parseFloat(br.readLine());
                a.add(new MatHang(maHang, tenHang, nhomHang, giaMua, giaBan));
            }
            Collections.sort(a,new Comparator<MatHang>() {
                @Override
                public int compare(MatHang a,MatHang b) {
                    if(a.giaBan - a.giaMua > b.giaBan - b.giaMua) return -1;
                    else return 1;
                }
            });
            for(MatHang i: a) {
                System.out.print(i.maHang + " " + i.tenHang + " " + i.nhomHang + " ");
                System.out.printf("%.2f\n", i.giaBan - i.giaMua);
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