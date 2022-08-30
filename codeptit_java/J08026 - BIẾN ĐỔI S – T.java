package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
        int S = sc.nextInt(), T = sc.nextInt();
        Queue<Integer> q = new LinkedList<>();
        int[] s = new int[20005];
        for(int i = 0; i <= 20000; i++) {
            s[i] = Integer.MAX_VALUE;
        }
        s[S] = 0;
        q.add(S);
        while(!q.isEmpty()) {
            int top = q.poll();
            if(top-1 >= 0 && s[top-1] > s[top]+1) {
                s[top-1] = s[top]+1;
                q.add(top-1);
            }
            if(top*2 <= 20000 && s[top*2] > s[top] + 1) {
                s[top*2] = s[top] + 1;
                q.add(top*2);
            }
        }
        System.out.println(s[T]);
    }
    
    public static void main(String[] args) {
	int t = 1;
        t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}