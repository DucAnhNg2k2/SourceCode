package runjavacodeptit;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.StringTokenizer;

class Point {
    private double x;
    private double y;

    public Point() {
    }

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }
    
    public Point(Point p) {
        this.x = p.x;
        this.y = p.y;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }
    
    public double distance(Point secondPoint) {
        return distance(this, secondPoint);
    }
    
    public double distance(Point p1,Point p2) {
        return Math.sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
    }
}
public class Main {
    private static Scanner sc = new Scanner(System.in);
    
    public static void solve() {
        Point p1 = new Point(sc.nextDouble(),sc.nextDouble());
        Point p2 = new Point(sc.nextDouble(),sc.nextDouble());
        System.out.printf("%.4f",p1.distance(p2));
        System.out.println("");
    }
    public static void main(String[] args) {
        int t = 1;
        t = Integer.parseInt(sc.nextLine());
        for(int i = 1; i<= t; i++) {
            solve();
        }
    }
}