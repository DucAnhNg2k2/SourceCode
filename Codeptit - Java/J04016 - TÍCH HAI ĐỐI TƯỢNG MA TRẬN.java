package runjavacodeptit;
import java.io.*;
import java.util.*;

public class Main {
    private static Scanner sc = new Scanner(System.in);
    private static void solve() {
       
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt(), p = sc.nextInt();
        Matrix a = new Matrix(n,m);
        a.nextMatrix(sc);
        Matrix b = new Matrix(m,p);
        b.nextMatrix(sc);
        System.out.println(a.mul(b));
    }
//    public static void main(String[] args) {
//	int t = 1;
//    //    t = Integer.parseInt(sc.nextLine());
//	for(int i = 1; i <= t; i++) {
//            solve();
//	}
//    }
}
class Matrix {
    public int n,m;
    public int[][] a = null;
    public Matrix(int n,int m) {
        this.n = n;
        this.m = m;
        a = new int[n][m];
    }
    public void nextMatrix(Scanner sc) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                a[i][j] = sc.nextInt();
            }
        }
    }
    @Override
    public String toString() {
        String ans = "";
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                ans += a[i][j] + " ";
            }
            ans += "\n";
        }
        return ans;
    }
    
    public void set(int x,int y,int val) {
        this.a[x][y] = val;
    }
    
    public int get(int x,int y) {
        return this.a[x][y];
    }
    
    public Matrix mul(Matrix b) {
        Matrix ans = null;
        try {
            ans  = new Matrix(this.n,b.m);
            for(int i = 0; i < this.n; i++) {
                for(int j = 0; j < b.m; j++) {
                    int sum = 0;
                    for(int k = 0; k < this.m; k++) {
                        sum += this.get(i, k) * b.get(k, j);
                    }
                    ans.set(i, j, sum);
                }
            }
        }
        catch(Exception e) {
            System.out.println(e);
        }
        return ans;
    }
}