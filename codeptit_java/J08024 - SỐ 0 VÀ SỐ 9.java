package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        long n = sc.nextLong();
        Queue<Integer> q = new LinkedList<Integer>();
        q.add(0);
        while(!q.isEmpty()) {
            int top = q.poll();
            if(top % n == 0 && top != 0) {
                System.out.println(top);
                return;
            }
            q.add(top*10+0);
            q.add(top*10+9);
        }
    }
    
    public static void main(String[] args) {
	int t = 1;
        t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}