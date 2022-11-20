import java.util.*;
import java.io.*;

class Pair<T1,T2> {
    private T1 t1;
    private T2 t2;

    public Pair(T1 t1, T2 t2) {
        this.t1 = t1;
        this.t2 = t2;
    }
    public boolean isPrime() {
        if((Integer)t1 < 2) {
            return false;
        }
        for(int i = 2; i <= Math.sqrt((Integer)t1); i++) {
            if((Integer)t1%i == 0) {
                return false;
            }
        }
        if((Integer)t2 < 2) {
            return false;
        }
        for(int i = 2; i <= Math.sqrt((Integer)t2); i++) {
            if((Integer)t2%i == 0) {
                return false;
            }
        }
        return true;
    }
    @Override
    public String toString() {
        String ans = "";
        ans += String.valueOf((Integer)t1) + " ";
        ans += String.valueOf((Integer)t2);
        return ans;
    }
}

public class Main{
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {

    }
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(new File("DATA.in"));
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            boolean check = false;
            for(int i = 2; i <= 2*Math.sqrt(n); i++){
                Pair<Integer, Integer> p = new Pair<>(i, n-i);
                if(p.isPrime()){
                    System.out.println(p);
                    check = true;
                    break;
                }
            }
            if(!check) System.out.println(-1);
        }
    }
//    public static void main(String[] args)  {
//        int Tsolve = 1;
//    //    Tsolve = Integer.parseInt(sc.nextLine());
//        for (int i = 1; i <= Tsolve; i++) {
//            solve();
//        }
//    }
}