package runjavacodeptit;
import java.io.*;
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
       for(long i = 1; i <= n; i++) {
           for(long j = i*2; j <= n; j += i) {
               int I = (int)i;
               int J = (int)j;
               prime[J] += I;
           }
       }
        int a = sc.nextInt(), b = sc.nextInt(), cnt = 0;
        for(int i = a; i <= b; i++) {
            if(prime[i] > i) {
                cnt++;
            }
        }
        System.out.println(cnt);
    }
    
    public static void main(String[] args) {
	int t = 1;
    //    t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}