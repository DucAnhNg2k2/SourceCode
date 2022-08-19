import java.io.*;
import java.nio.*;
import java.util.*;
 
public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
	long B = sc.nextLong(), N = sc.nextLong(), ans = 0;
        Stack<Long> st = new Stack<>();
        while(N > 0) {
            st.add(N%B);
            N /= B;
        }
        while(!st.empty()) {
            ans += Math.pow(st.pop(), 2);
        }
        System.out.println(ans);
    }
	
    public static void main(String[] args) {
	int t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
} 