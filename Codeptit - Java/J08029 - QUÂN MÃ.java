package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static class Point {
        public int x;
        public int y;

        public Point(int x, int y) {
            this.x = x;
            this.y = y;
        }

        public Point() {
        }
        
    }
    private static int[][] mv = {{-2,-1},{-2,1},{2,1},{2,-1},{1,-2},{1,2},{-1,2},{-1,-2}};
    private static int get(char c) {
        int ans = c - 'a' + 1;
        return ans;
    }
    private static void solve() {
        String s1 = sc.next(), s2 = sc.next();
        int[][] s = new int[10][10];
        for(int i = 0 ; i <= 9; i++) {
            for(int j = 0; j <= 9; j++) {
                s[i][j] = Integer.MAX_VALUE;
            }
        }
        Queue<Point> q = new LinkedList<>();
        Point st = new Point(); st.x = get(s1.charAt(0)); st.y = Integer.valueOf(s1.charAt(1)) - 48;
        Point fi = new Point(); fi.x = get(s2.charAt(0)); fi.y = Integer.valueOf(s2.charAt(1)) - 48;
        q.add(st);
        s[st.x][st.y] = 0;
        while(!q.isEmpty()) {
            Point top = q.poll();
            for(int i = 0 ; i < 8; i++) {
                int x = top.x + mv[i][0], y = top.y + mv[i][1];
                if(x >= 1 && y >= 1 && x <= 8 && y <= 8) {
                    if(s[x][y] > s[top.x][top.y]+1) {
                        s[x][y] = s[top.x][top.y] + 1;
                        q.add(new Point(x,y));
                    }
                }
            }
        }
        System.out.println(s[fi.x][fi.y]);
    }
    
    public static void main(String[] args) {
	int t = 1;
        t = Integer.parseInt(sc.nextLine());
	for(int i = 1; i <= t; i++) {
            solve();
	}
    }
}