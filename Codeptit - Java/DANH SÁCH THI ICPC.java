import java.io.*;
import java.util.*;

class Team {
    private static int ID = 0;
    public String mateam;
    public String tenteam;
    public String tenthuong;

    public Team(String tenteam, String tenthuong) {
        ID++;
        this.mateam = String.valueOf(ID);
        while(mateam.length() < 2) {
            mateam = "0" + mateam;
        }
        mateam = "Team" + mateam;
        this.tenteam = tenteam;
        this.tenthuong = tenthuong;
    }
}

class ThiSinh {
    private static int ID = 0;
    public String mathisinh;
    public String hovaten;
    public String mateam;

    public ThiSinh(String hovaten, String mateam) {
        ID++;
        this.mathisinh = String.valueOf(ID);
        while(mathisinh.length() < 3) {
            mathisinh = "0" + mathisinh;
        }
        mathisinh = "C" + mathisinh;
        this.hovaten = hovaten;
        this.mateam = mateam;
    }
}

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        try {
            int n = Integer.parseInt(sc.nextLine());
            ArrayList<Team> arr = new ArrayList<>();
            for(int i = 1; i <= n; i++) {
                arr.add(new Team(sc.nextLine(),sc.nextLine()));
            }
            n = Integer.parseInt(sc.nextLine());
            ArrayList<ThiSinh> arr1 = new ArrayList<>();
            for(int i = 1; i <= n; i++) {
                arr1.add(new ThiSinh(sc.nextLine(),sc.nextLine()));
            }
            Collections.sort(arr1, new Comparator<ThiSinh>() {
                @Override
                public int compare(ThiSinh o1, ThiSinh o2) {
                    return o1.hovaten.compareTo(o2.hovaten);
                }
            });
            for(ThiSinh i: arr1) {
                for(Team j: arr) {
                    if(i.mateam.compareTo(j.mateam) == 0) {
                        System.out.println(i.mathisinh + " " + i.hovaten + " " + j.tenteam + " " + j.tenthuong);
                    }
                }
            }
        }
        catch(Exception e) {
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