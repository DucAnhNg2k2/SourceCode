package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static class SinhVien {
        public String maSV;
        public String hoTen;
        public String soDT;
        public String email;
        public String ho,ten,tenDem;
        
        public SinhVien(String maSV, String hoTen, String soDT, String email) {
            this.maSV = maSV;
            this.hoTen = hoTen;
            this.soDT = soDT;
            this.email = email;
            String[] name = hoTen.split("\\s+");
            this.ten = name[name.length-1];
            this.ho = name[0];
            this.tenDem = "";
            for(int i = 1; i < name.length-1; i++) {
                this.tenDem += name[i];
            }
        }
        
    }
    private static void solve() {
        try {
          BufferedReader br = new BufferedReader(new FileReader("SINHVIEN.in"));
          ArrayList<SinhVien> arr = new ArrayList<>();
          int n = Integer.parseInt(br.readLine());
          for(int i = 1; i <= n; i++) {
              String maSV = br.readLine();
              String hoTen = br.readLine();
              String soDT = br.readLine();
              String email = br.readLine();
              arr.add(new SinhVien(maSV,hoTen,soDT,email));
          }
          Collections.sort(arr, new Comparator<SinhVien>() {
              @Override
              public int compare(SinhVien a,SinhVien b) {
                  if(a.ten.compareTo(b.ten) == 0) {
                      if(a.ho.compareTo(b.ho) == 0) {
                          if(a.tenDem.compareTo(b.tenDem) == 0) {
                              return a.maSV.compareTo(b.maSV);
                          }
                          return a.tenDem.compareTo(b.tenDem);
                      }
                      return a.ho.compareTo(b.ho);
                  }
                  return a.ten.compareTo(b.ten);
              }
          });
          for(SinhVien i:arr) {
              System.out.println(i.maSV + " " + i.hoTen + " " + i.soDT + " " + i.email);
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