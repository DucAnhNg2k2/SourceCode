package runjavacodeptit;
import java.io.*;
import java.math.*;
import java.util.*;

/*
Cho hai số nguyên dương a,b.
Hãy đếm xem trong đoạn [a,b] có bao nhiêu số có tổng các ước số (không tính chính nó) lớn hơn giá trị của nó.
Ví dụ: số 12 có tổng ước số là 1 + 2 + 3 + 4 + 6 = 16 > 12.
*/
public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static int[] prime = new int[1000005];
    private static final int n = 1000000;
    private static void solve() {     
       try {
           Scanner sc = new Scanner(new FileReader("DATA.in"));
           String s = sc.nextLine();
           while(s.length() > 1) {
               BigInteger b1 = new BigInteger(s.substring(0,s.length()/2));
               BigInteger b2 = new BigInteger(s.substring(s.length()/2,s.length()));
               s = b1.add(b2).toString();
               System.out.println(s);
           }
       }
       catch(IOException e) {
           
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