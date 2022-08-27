package runjavacodeptit;
import java.io.*;
import java.util.*;
import java.util.logging.Level;
import java.util.logging.Logger;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static class BangDiem {
        public String id;
        public String ten;
        public double diem;
        
        public BangDiem(String id,String ten, double diem) {
            this.id = id;
            this.ten = ten;
            this.diem = (double) Math.round(diem*100) / 100;
        }
        
    }
    private static void solve() {
        ArrayList<BangDiem> a = new ArrayList<>();
        try {
            Scanner sc = new Scanner(new FileReader("BANGDIEM.in"));
            int n = Integer.parseInt(sc.nextLine());
            for(int i = 1; i <= n; i++) {
                String id = String.valueOf(i);
                if(id.length() == 1) id = "0" + id;
                id = "SV" + id;
                String name = sc.nextLine();
                String[] aName = name.trim().split("\\s+");
                name = "";
                for(int j = 0; j < aName.length; j++) {
                    StringBuilder s = new StringBuilder(aName[j].toLowerCase());
                    s.setCharAt(0, Character.toUpperCase(s.charAt(0)));
                    name = name + s.toString();
                    if(j != aName.length-1) {
                        name += " ";
                    }
                }
                int m1 = Integer.parseInt(sc.nextLine());
                int m2 = Integer.parseInt(sc.nextLine());
                int m3 = Integer.parseInt(sc.nextLine());
                a.add(new BangDiem(id,name, (m1*3+m2*3+m3*2)*1.0/8));
            }
            Collections.sort(a,new Comparator<BangDiem>() {
                @Override
                public int compare(BangDiem a,BangDiem b) {
                    if(a.diem > b.diem) return -1;
                    if(a.diem == b.diem) {
                        return a.id.compareTo(b.id);
                    }
                    return 1;
                }
            });
            double val = -1;
            int idx = 0;
            for(int i = 0; i < a.size(); i++) {
                BangDiem s = a.get(i);
                if(val != s.diem) {
                    val = s.diem;
                    idx = i+1;
                    System.out.print(s.id + " " + s.ten + " ");
                    System.out.printf("%.2f", s.diem);
                    System.out.println(" " + idx);
                }
                else {
                    System.out.print(s.id + " " + s.ten + " ");
                    System.out.printf("%.2f", s.diem);
                    System.out.println(" " + idx);
                }
            }
        } catch (FileNotFoundException ex) {
            Logger.getLogger(Main.class.getName()).log(Level.SEVERE, null, ex);
        } catch (Exception e) {
            System.out.println(e);
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